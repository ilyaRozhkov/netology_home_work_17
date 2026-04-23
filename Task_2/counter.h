#pragma once

class Counter {
private:
    int value;  

public:
    Counter();                
    Counter(int initial);     

    void increment();         
    void decrement();         
    int get_value() const;    
};