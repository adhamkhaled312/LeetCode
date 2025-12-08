class Solution {
public:
    int countTriples(int n) {
        int c=n*n;
        int ret=0;
        for(int c=1;c<=n;c++){
            int tempC=c*c;
            for(int a=1;a<=n;a++){
                int tempA=a*a;
                for(int b=1;b<=n;b++){
                    int tempB=b*b;
                    if(tempA + tempB == tempC) {
                        ret++;
                    }
                    else if(tempA + tempB > tempC) break;
                }
            }
        }

        return ret;
    }
};