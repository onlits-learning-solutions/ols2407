class time
{
private:
    int hour;
    int minute;
    int second;

public:
    void setTime(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    time getTime()
    {
        return *this;
    }

    void setHour(int hour)
    {
        this->hour = hour;
    }

    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    int getSecond()
    {
        return this->second;
    }
};

int main()
{
    time t1, t2;
    time *t3 = new time;
    t1.setTime(10, 30, 45);
    t2 = t1.getTime();
    t3->setTime(12, 45, 50);
    return 0;
}