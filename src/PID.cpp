#include "PID.h"
#include "math.h"
/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * Initialize PID coefficients (and errors, if needed)
   */
	this->Kp = Kp_;
	this->Kd = Kd_;
	this->Ki = Ki_;

	p_error = 0;
	d_error = 0;
	i_error = 0;

	first_update = true;
}

void PID::UpdateError(double cte) {
  /**
   * Update PID errors based on cte.
   */
	if(first_update)
	{
		old_d_error  = cte;
		first_update = false;
	}
	p_error  = cte;
	d_error  = cte - old_d_error;
	i_error  += cte;

}

double PID::TotalError() {
  /**
   * Calculate and return the total error
   */

	double total_error = Kp * p_error + Ki * i_error + Kd * d_error;

	old_d_error = p_error;
    return -1 * total_error;
}
