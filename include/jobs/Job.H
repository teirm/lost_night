/*
 * Implementation of virtual Job parent class.
 *
 * Author: Cyrus Ramavarapu
 * Date:   01 April 2018
 */

#ifndef JOB_GUARD_H
#define JOB_GUARD_H

#include <string>
#include <map>

class Job {
    public:
        std::string get_job_name(void);
        virtual std::map<std::string, std::string> get_skills(void) = 0;
        virtual std::map<std::string, int> get_spells(void) = 0; 
        virtual std::map<std::string, int> get_statistics(void) = 0;
    private:
        std::map<std::string, int> statistics;
        int add_experience(int exp);
        virtual int update_statistics(void) = 0;
};
#endif /* JOB_GUARD_H */
