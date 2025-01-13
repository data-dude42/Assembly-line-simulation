// Name- Paras singh
// StudentID: 165-114-232
// Date: 3 August 2024
// Seneca Email: psingh721@myseneca.ca
#ifndef SENECA_CUSTOMERORDER_H
#define SENECA_CUSTOMERORDER_H

#include <iostream>
#include <algorithm>
#include <string>
#include "Station.h"

namespace seneca
{
	// Defining structure item here
	struct Item
	{
		std::string m_itemName = "";
		size_t m_serialNumber{0};
		bool m_isFilled{false};

		Item(const std::string &src) : m_itemName(src) {};
	};
	// customer class
	class CustomerOrder
	{

		std::string m_name = "";

		std::string m_product = "";

		size_t m_cntItem = 0u;

		Item **m_lstItem{nullptr};

		static size_t m_widthField;

	public:
		// rule of 5
		// default constructor
		CustomerOrder() = default;
		CustomerOrder(const std::string &line);

		CustomerOrder(const CustomerOrder &);
		// Deleting the Copy assignment
		CustomerOrder &operator=(CustomerOrder &customer) = delete;

		CustomerOrder(CustomerOrder &&moveCustomer) noexcept;
		// Move assignment Operator
		CustomerOrder &operator=(CustomerOrder &&moveCustomer) noexcept;
		// Destructor
		virtual ~CustomerOrder();

		bool isOrderFilled() const;

		bool isItemFilled(const std::string &itemName) const;

		void fillItem(Station &station, std::ostream &os);
		void display(std::ostream &os) const;
	};

}

#endif