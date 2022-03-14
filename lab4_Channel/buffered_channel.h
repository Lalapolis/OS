#ifndef BUFFERED_CHANNEL_H_
#define BUFFERED_CHANNEL_H_

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>


using namespace std;

template<class T>
class BufferedChannel {
 public:
    explicit BufferedChannel(int size) {}

    void Send(T value) {
    	unique_lock<mutex> lock_(mutex_);
        cv_.wait(lock_, open_ && queue_.size() != size);
        if (!open_) throw runtime_error("Closed");
        queue_.emplace(value);
        mutex_.unlock();
        cv_.notify_one();
    }

    pair<T, bool> Recv() {
    	
    	unique_lock<mutex> lock_(mtx);
        cv_.wait(lock_, open && !queue_.empty());
        T value = move(queue_.front());
        queue_.pop();
        mutex_.unlock();
        cv_.notify_one();
        return make_pair(value, open_);
    	
    }

    void Close() {
    	unique_lock<mutex> Lock_(mutex_);
    	open_=false;
    	Lock_.unlock();
    	cv_.notify_all();
	}

 private:
 	queue<T> queue_;
 	int size_;
 	mutex mutex_;
 	condition_variable cv_
 	bool open_=true;
 	
};

#endif // BUFFERED_CHANNEL_H_
