class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        while(!students.empty()){
            if(find(students.begin(),students.end(),sandwiches[0])==students.end()){
                return students.size();
            } 
            else if(students[0]==sandwiches[0]){
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
            } 
            else{
                int a=students[0];
                students.erase(students.begin());
                students.push_back(a);
            }
        }
        return students.size();
    }
};