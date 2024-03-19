class MedianFinder {
public:
    priority_queue<int>maxh;
    priority_queue<int,vector<int>,greater<int>>minh;
    MedianFinder() {

    }
    void addNum(int num){
        if(maxh.size()== 0 || num<maxh.top()){
            maxh.push(num);
        }
            
        else{
            minh.push(num);
        }
        if(abs((int)maxh.size()-(int)minh.size())>1){
            minh.push(maxh.top());
            maxh.pop();
        } 
        else if(minh.size()>maxh.size()){
            maxh.push(minh.top());
            minh.pop();
        }
    }
    double findMedian(){
        if (minh.size()<maxh.size())
            return (double)maxh.top();
        else {
            return double(maxh.top()+minh.top())/2.0;
        }
    }
};
