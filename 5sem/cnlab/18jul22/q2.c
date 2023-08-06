#include<stdio.h>
#include<string.h>
struct info{
	int roll;
	char name[20];
	float cgpa;
	
};
void printinfo(struct info *rec){
printf("Roll Number:%d\n",rec->roll);
printf("Name:%s\n",rec->name);
printf("CGPA:%f\n",rec->cgpa);
}
int main()
{
	struct info rec;
	rec.roll=6343;
	strcpy(rec.name,"viraaj");
	rec.cgpa=8.9;
	printinfo(&rec);
	return 0;
	

}


