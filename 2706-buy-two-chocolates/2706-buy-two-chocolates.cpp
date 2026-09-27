class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        int n = prices.size();

        for(int i=1;i<n;i++){

            bool isSwap = false;

            for(int j=0;j<(n-i);j++){
                if(prices[j]>prices[j+1]){
                    int temp = prices[j];
                    prices[j]=prices[j+1];
                    prices[j+1] = temp;

                    isSwap = true ;

                }
            }

            if(!isSwap){
                break;
            }
        }

        if(prices[0]+prices[1]>money){
            return money;
        }

        return (money - (prices[0]+prices[1]));

        
    }
};