#include <stdio.h>
#include <stdlib.h>
// DICKY IBROHIM
int jumlaharray (int data[], int batas);
int main()
{
    int data[] = {1,2,3,4};
    printf ("Jumlah Array: %d", jumlaharray(data,3));
    return 0;
}

//Fungsi Array Recrusif
int jumlaharray (int data[], int batas)
{
 if (batas<0) // kalau pakai if (batas==0), maka returnnya return data [0];
{
    return 0; // return data [0]
}
else
{
    printf ("+%d ", data[batas]);
    return data[batas]+jumlaharray(data, batas-1);
}
}

/* KETERANGAN UAS KELUAR
data[]={1,2,3,4}     jumlah(data-(batas-1)) // 3 dari JUMLAH INDEX
                     jumlah(data-(3-1))
                     jumlah(data-(2-1))
                     jumlah(data-(1-1))
                     jumlah(data-(0))
                     4+3+2+1+0=10
*/
int recMax(int data[], int cur,int arrSize)
{

    if(arrSize<0)
    {
        return cur;
    }
    else
    {
        if(cur<data[arrSize])
        {
            cur=data[arrSize];
        }
            return recMax(data,cur,arrSize-1);
    }
}
int recMin(int data[], int cur,int arrSize)
{
    if(arrSize==0)
    {
        return cur;
    }
    else
    {
        if(data[cur]>data[arrSize])
        {
            cur=data[arrSize];
        }
        return recMin(data,cur,arrSize-1);
    }
}
void recPrintAll(int data[],int cur, int arrSize)
{
    if(cur==arrSize-1)
    {
        printf("%d ",data[cur]);
    }
    else
    {
        printf("%d-",data[cur]);
        recPrintAll(data,cur+1,arrSize);
    }
}
