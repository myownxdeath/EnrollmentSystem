#pragma once
#ifndef COURSEUNITCLASS_H
#define COURSEUNITCLASS_H

#include "CourseUnit.h"

class CourseUnitClass 
{
private:
	//MEMBER VARIABLES
	const unsigned short int classNumber;
	vector<Student*> studentsInClass;
	CourseUnit* courseUnit;
	Tutor* professor;
	
public:
	//MEMBER FUNCTIONS
	CourseUnitClass(unsigned short int cn, CourseUnit* cu) : courseUnit(cu), classNumber(cn) {}
	void addStudent(Student* s);
	bool removeStudent(Student* s);
	void setProfessor(Tutor* t);

	//GETS
	unsigned short int getNumberOfStudents() const { return studentsInClass.size(); }
	unsigned short int getClassNumber() const { return classNumber; }
	vector<Student*> getStudentsInClass() const { return studentsInClass; }
	CourseUnit* getCourseUnit() const { return courseUnit;}
};

#endif
