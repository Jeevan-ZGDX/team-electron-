#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;

struct Line{
int x1, y1, x2, y2;
};
int countCells(Line line, pair<int, int>star , bool split){
    if (line.x1 == line.x2){
        if (split){
            return min(abs(star.second - line.y1), abs(star.second - line.y2)) + 1;
        }
        else{
            return abs(line.y1 - line.y2)+1;
        }
    }
    else{
        if(split){
            return min(abs(star.first - line.x1), abs(star.first - line.x2)) + 1;
        }
        else{
            return abs(line.x1 - line.x2) + 1;
        }
    }
}
bool intersects(Line a, Line b, pair<int, int>& intersection){
    if(a.x1 == a.x1 && a.y1 == b.y2){

    }
}
