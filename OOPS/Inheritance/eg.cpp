class Ground
{
    int rooms;

protected:
    void put(){};

public:
    void get();
};
class Middle : private Ground
{
    int labs;

public:
    void take();
    void give();
};
class Top : public Middle
{
    int roof;

public:
    void in();
    void out();
}