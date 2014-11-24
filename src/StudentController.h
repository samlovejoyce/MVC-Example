/*
 * StudentController.h
 *
 *  Created on: 24/11/2014
 *      Author: javi
 */

#ifndef STUDENTCONTROLLER_H_
#define STUDENTCONTROLLER_H_

#include <string>

#include "Student.h"
#include "StudentView.h"

namespace ejemplo_mvc {

class StudentController {
public:
	StudentController(Student model, StudentView view);
	virtual ~StudentController();

	void setStudentName(std::string name);
	std::string getStudentName(void);

	void setStudentRollNo(std::string rollNo);
	std::string getStudentRollNo(void);

	void updateView(void);

private:
	Student model;
	StudentView view;
};

} /* namespace ejemplo_mvc */
#endif /* STUDENTCONTROLLER_H_ */
