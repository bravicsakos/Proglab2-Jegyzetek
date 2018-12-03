class Location {
    double lat;
    double lon;
public:
    double &Lat;
    double &Lon;
    Location();
    Location(double lat, double lon);
    int operator == (const Location &arg) const;
};

Location::Location() : lat(0), lon(0), Lat(lat), Lon(lon){}

Location::Location(double lat, double lon) : lat(lat), lon(lon), Lat(this->lat), Lon(this->lon){}

int Location::operator == (const Location &arg) const{
    return (this->Lon == arg.Lon && this->Lat == arg.Lat) ? 1 : 0;
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
