// again me being overthinker trying to solve all my curiosities in one question wasting 40 minutes

class Solution
{
public:
    int isPowerOfAnother(int X, int Y)
    {

        // if(X==1||X==0)
        //     return false;

        for (int i = 0; i <= sqrt(Y); i++)
        {
            if (pow(X, i) == Y)
                return true;
        }

        return false;

        // int ran=0;
        // if(X==1 || X==0)
        //     return false;
        // if(Y%X == 0){
        //     for(int i=1;i<Y/2;i++){
        //             if(i!=2 && Y%i==0){
        //                 ran=1;
        //                 break;
        //             }
        //     }
        //     return (ran==0)?true:false;
        // }

        // else
        //     return false;
    }
};