//header file for input output functions
#include<iostream>
#include<array>
using namespace std ;


//mean of a vector
float mean (float *vector)
{
    float m = 0.0;
    int size = sizeof(vector)/sizeof(vector[0]);
    for (int i = 0; i < sizeof(vector); i++)
    {
        m += vector[i] ;
    }
    cout<<"\n Taille de vec1 \n"<<size;
    return(m/size);
    
}

//similarity between user ar1 and user ar2
float similarity (float *ar1,float *ar2)
{
    float num = 0.0;
    float d1 = 0.0;
    float d2,f1,f2 = 0.0;
    int size_arr1 = sizeof(ar1)/sizeof(ar1[0]); //size of vectors
    int size_arr2 = sizeof(ar2)/sizeof(ar2[0]);
    for (int  i = 0; i < max(size_arr1,size_arr2); i++)
    {
        if (ar1[i]!=0  &  ar2[i]!=0)
        {
            f1 = ar1[i] - mean(ar1);
        }
        
    }
    
}


//Neigborhood selection which must return the indice of the k user who are nearest of our user
int * selection(float *similarity_vector)
{

}


//Make predictions using the current user and the neighbord
float prediction(float *user )
{

}







//now we write the main function
int main(int argc , char **argv)
{
    array<int,4>a = {10, 20, 30, 40};
     float m = a.size();
     cout<<"moyenne de vec1 \n"<<m;

    return 0;
}