class Solution
{
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches)
    {
        queue<int>studentQueue,sandwichesQueue;
        int studentZero=0,studentOne=0;
        for(int i=0; i<students.size(); i++)
        {
            studentQueue.push(students[i]);
            if(students[i]==0)
                studentZero++;
            else if(students[i]==1)
                studentOne++;
            sandwichesQueue.push(sandwiches[i]);
        }
        cout<<studentZero<<" "<<studentOne<<" ";
        int temp=0,size=students.size();
        for(int i=0; i<size; i++)
        {
            if(sandwichesQueue.front()==0&&studentZero!=0)
            {
                sandwichesQueue.pop();
                studentZero--;
            }
            else if(sandwichesQueue.front()==1&&studentOne!=0)
            {
                sandwichesQueue.pop();
                studentOne--;
            }

        }
        return sandwichesQueue.size();
    }
};
