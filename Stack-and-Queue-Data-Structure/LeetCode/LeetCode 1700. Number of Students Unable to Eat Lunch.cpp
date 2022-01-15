class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>studentQueue,sandwichesQueue;
        for(int i=0;i<students.size();i++){
            studentQueue.push(students[i]);
            sandwichesQueue.push(sandwiches[i]);
        }
        int temp=0,size=students.size();
        for(int i=0;i<size*size;i++){
            if(studentQueue.front()==sandwichesQueue.front()&&studentQueue.size()!=0){
                studentQueue.pop();
                sandwichesQueue.pop();
            }
            else if(studentQueue.front()!=sandwichesQueue.front()&&studentQueue.size()!=0) {
                temp=studentQueue.front();
                studentQueue.pop();
                studentQueue.push(temp);
            }

        }
        return studentQueue.size();
    }
};
