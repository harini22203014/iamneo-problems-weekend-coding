class Solution {
    public int[] finalPrices(int[] prices) {
        for(int i=0;i<prices.length;i++){
           // int f=0;
            for(int j=i+1;j<prices.length;j++){
                if(prices[j]<=prices[i]){
                    prices[i]=prices[i]-prices[j];
                   // f=1;
                    break;


                }
            }
            
        }
        return prices;
        
    }
}
