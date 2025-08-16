class Solution {
public:
    int maximum69Number (int num) {
        int a=num,count=0;
        while(a!=0)
        {
            a/=10;
            count++;
        }
        int arr[count];
        for(int i=count-1;i>=0;i--)
        {
            arr[i]=num%10;
            num=num/10;
        }
        for(int i=0;i<count;i++)
        {
            if(arr[i]==6)
            {
                arr[i]=9;
                break;
            }
        }
        for(int i=0;i<count;i++)
        {
            num=(num*10)+arr[i];
        }
        return num;
    }
};