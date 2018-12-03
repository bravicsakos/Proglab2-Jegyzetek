class Location {
    double lat;
    double lon;
public:
    double &Lat;
    double &Lon;
    Location();
    Location(double lat, double lon);
    int operator == (const Location &arg) const;
    //friend Location operator+(const Location &arg1, const Location &arg2);
};

Location::Location() : Lat(this->lat), Lon(this->lon){
    Location::lat = 0;
    Location::lon = 0;
}

Location::Location(double lat, double lon) : Lat(this->lat), Lon(this->lon){
    Location::lat = lat;
    Location::lon = lon;
}


int Location::operator == (const Location &arg) const{
    return (Lon == arg.Lon && Lat == arg.Lat) ? 1 : 0;
}

Location operator + (const Location &arg1, const Location &arg2) {
    double avglat = (arg1.Lat + arg2.Lat) / 2;
    double avglon = (arg1.Lon + arg2.Lon) / 2;
    Location result(avglat, avglon);
    return result;
}



int main() {
    return 0;
}