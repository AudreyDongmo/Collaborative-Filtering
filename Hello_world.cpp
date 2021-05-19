//header file for input output functions
#include<iostream>
#include<vector>
#include<math.h>
using namespace std ;


//size of a vector
int size_v(float vector[])
{
    return ((sizeof(vector)/sizeof(vector[0])));
}

//mean of a vector
float mean (float vector[] )
{
    float m = 0.0;
    int size = size_v(vector);
    for (int i = 0; i < size; i++)
    {
        m += vector[i] ;
    }
    return(m/size);
    
}

//similarity between user ar1 and user ar2
float similarity (float ar1[],float ar2[])
{
    float num = 0.0;
    float d1 = 0.0;
    float d2,f1,f2 = 0.0;
    int size_arr1 = size_v(ar1); //size of vectors
    int size_arr2 = size_v(ar2);
    for (int  i = 0; i < max(size_arr1,size_arr2); i++)
    {
        if (ar1[i]!=0  &  ar2[i]!=0)
        {
         f1 = ar1[i] - mean(ar1);
         f2 = ar2[i] - mean(ar2);
         num += f1 * f2;
         d1 += f1 * f1;
         d2 += f2 * f2 ;
        }
        
    }

    return(num/(sqrt(d1) * sqrt(d2)));
    
}


//Neigborhood selection which must return the indice of the k user who are nearest of our user
int * selection(float *similarity_vector)
{

}


//Make predictions using the current user and the neighbord
float prediction(float *user )
{

}






float audrey[] = {1.0,2.0,3.0,3.5,4.4,1.0,2.0,3.0,3.5,4.4,1.0,2.0,3.0,3.5,4.4};
float Laure[] = {1.0,2.5,3.3,3.5,4.4,1.0,2.0,3.0,3.5,4.4,1.0,2.0,3.0,3.5,4.4};
//now we write the main function
int main(int argc , char **argv)
{
    //array<int,4>a = {10, 20, 30, 40};
     float sim = similarity(audrey , Laure);
     cout<<" La similarité entre Audrey et Laure est: \n"<< sim <<"\n" <<endl ;

    return 0;
}