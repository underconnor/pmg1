int hours;
int minutes;
int seconds;

void convert_time(int sec) {
    hours = sec / 3600;
    minutes = (sec % 3600) / 60;
    seconds = sec % 60;
}
