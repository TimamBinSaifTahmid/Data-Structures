//For calculating the steps needed to make the array's element equal it is sufficient for us to
// add the difference of all odd number(odd number<n) from the given number

class Solution {
public:
    int minOperations(int n) {
        int sum=0;
        for(int i=1;i<n;i+=2){
            sum=sum+(n-i);
        }
       return sum;
    }
};
