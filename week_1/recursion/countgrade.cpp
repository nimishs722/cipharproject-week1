#include<iostream>

using namespace std;

string grades(int marks )

{



   if(marks<=100 && marks>=91)

{

 cout<<"The grade of a student is AA.";



}

else if(marks<=90 && marks>=81)

{

 cout<<"The grade of a student is AB.";

}

else if(marks<=80 && marks>=71)

{

 cout<<"The grade of a student is BB.";

}

else if(marks<=70 && marks>=61)

{

 cout<<"The grade of student is BC.";

}

else if(marks<=60 && marks>=51)

{

 cout<<"The grade of a student is CD.";

}

else if(marks<=50 && marks>=41)

{

 cout<<"The grade of a student is DD.";

}

else if(marks<=40)

{

 cout<<"The student is fail.";

}

else

{

 cout<<" Bye Bye";

}

}

int main()

{

int marks;

cout<<" Enter the marks(0-100) of a student:";

cin>>marks;

cout<<grades(marks);



return 0;



}
