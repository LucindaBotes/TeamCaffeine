#ifndef GDP_H
#define GDP_H

class GDP {
  private:
    double _value;

  public:
    GDP();
    GDP(double);
    ~GDP();

    double getValue() const;
    void setValue(double);
};

#endif
