    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int count1=0; //记录5美元；
        int count2=0; //记录10美元；
        for(int i=0;i<n;i++){
            if(bills[i]==5)
            count1++;
            else if(bills[i]==10){
                if(count1!=0){
                    count2++;
                    count1--;
                }
                else 
                return false; 
            }
            else{
                if(count1>=1&&count2>=1){
                    count2--;
                    count1--;
                }
                else if(count2<1&&count1>=3){
                    count1-=3;
                }
                else
                return false;
            }
        }
        return true;
    }