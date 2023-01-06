class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>>coordinates;
        coordinates.push_back(p1);
         coordinates.push_back(p2);
         coordinates.push_back(p3);
         coordinates.push_back(p4);
        sort(coordinates.begin(),coordinates.end());
       double s1=sqrt(pow(abs(coordinates[0][0]-coordinates[1][0]),2)+pow(abs(coordinates[0][1]-coordinates[1][1]),2));
        double s2=sqrt(pow(abs(coordinates[0][0]-coordinates[2][0]),2)+pow(abs(coordinates[0][1]-coordinates[2][1]),2));
        double s3=sqrt(pow(abs(coordinates[1][0]-coordinates[3][0]),2)+pow(abs(coordinates[1][1]-coordinates[3][1]),2));
        double s4=sqrt(pow(abs(coordinates[2][0]-coordinates[3][0]),2)+pow(abs(coordinates[2][1]-coordinates[3][1]),2));
        
        double d1=sqrt(pow(abs(coordinates[0][0]-coordinates[3][0]),2)+pow(abs(coordinates[0][1]-coordinates[3][1]),2));
        double d2=sqrt(pow(abs(coordinates[1][0]-coordinates[2][0]),2)+pow(abs(coordinates[1][1]-coordinates[2][1]),2));    
        
        if(s1!=0&&s1==s2&&s2==s3&&s3==s4&&s4==s1&&s1==s3&&s4==s2&&d1==d2)
            return true;
        return false;
    }
};