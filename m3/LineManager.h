// Name- Paras singh
//StudentID: 165-114-232
//Date: 3 August 2024
//Seneca Email: psingh721@myseneca.ca
#ifndef SENECA_LINEMANAGER_H
#define SENECA_LINEMANAGER_H
#include <vector>
#include "Workstation.h"

namespace seneca
{

	class LineManager
	{
		// the collection of workstations for the current assembly line.
		std::vector<Workstation*> m_activeLine;
		//the total number of CustomerOrder objects
		size_t m_cntCustomerOrder{ 0u };

		//points to the first active station on the current line
		Workstation* m_firstStation{ nullptr };
	public:
		LineManager(const std::string& file, const std::vector<Workstation*>& stations);
		void reorderStations();
		bool run(std::ostream& os);
		void display(std::ostream& os) const;
	};
}
#endif //SENECA_LineManager_H
