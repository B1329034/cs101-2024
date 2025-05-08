class Car {};

class BMW_Car : public Car {
privated:
string m_DriveMode;

public:
BMW_Car(string y,int z,int s) : Car("BMW",y,z,s)
    count<< "Constructing BMW_Car\n";
m_DriveMode = "Rear-wheel";
}

string get_DriveMode(){
   return m_DriveMode;
}
class AUDI_Car : public Car {
privated:
string m_DriveMode;

public:
AUDI_Car(string y,int z,int s) : Car("AUDI",y,z,s)
    count<< "Constructing AUDI_Car\n";
m_DriveMode = "Front-wheel";
}

string get_DriveMode(){
   return m_DriveMode;
}
class BENZ_Car : public Car {
privated:
string m_DriveMode;

public:
BENZ_Car(string y,int z,int s) : Car("BENZ",y,z,s)
 count<< "Constructing BENZ_Car\n";
m_DriveMode = "Front-wheel";
}
string get_DriveMode(){
  return m_DriveMode;
