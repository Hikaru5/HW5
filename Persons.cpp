#include "stdafx.h" 
#include <cstdio> 
#include <string> 

class PersonData
{
private:
	std::string lastName;
	std::string firstName;
	std::string address;
	std::string city;
	std::string state;
	int zip;
	int phone;
	PersonData()
	{

	};

protected:
	PersonData(std::string last, std::string first, std::string add, std::string town, std::string sta, int _zip, int _phone)
	{
		lastName = last;
		firstName = first;
		address = add;
		city = town;
		state = sta;
		zip = _zip;
		phone = _phone;
	}

public:
	std::string getLast()
	{
		return lastName;
	}

	std::string getFirst()
	{
		return firstName;
	}

	std::string getAddress()
	{
		return address;
	}

	std::string getCity()
	{
		return city;
	}

	std::string getState()
	{
		return state;
	}

	int getZip()
	{
		return zip;
	}

	int getPhone()
	{
		return phone;
	}

	void setLast(std::string last)
	{
		lastName = last;
	}

	void setFirst(std::string first)
	{
		firstName = first;
	}

	void setAddress(std::string add)
	{
		address = add;
	}

	void setCity(std::string _city)
	{
		city = _city;
	}

	void setState(std::string _state)
	{
		state = _state;
	}

	void setZip(int _zip)
	{
		zip = _zip;
	}

	void setPhone(int _phone)
	{
		phone = _phone;
	}
};

class CustomerData : public PersonData
{
private:
	int customerNumber;
	bool mailingList;

public:
	CustomerData(int num, bool mail, std::string last, std::string first, std::string add, std::string town, std::string sta, int _zip, int _phone) : PersonData(last, first, add, town, sta, _zip, _phone)
	{
		customerNumber = num;
		mailingList = mail;
	}

	int getCustomerNumber()
	{
		return customerNumber;
	}

	bool getMailingList()
	{
		return mailingList;
	}

	void setCustomerNumber(int num)
	{
		customerNumber = num;
	}

	void setMailingList(bool mail)
	{
		mailingList = mail;
	}
};

int main()
{
	CustomerData me(55209, true, "Chase", "Connor", "33333 Main Street", "Pomona", "California", 55204, 3333333333);
	printf("Customer Number: %d", me.getCustomerNumber());
	printf("\nMailing List: %d", me.getMailingList());
	printf("\nLast Name: %s", me.getLast().c_str());
	printf("\nFirst Name: %s", me.getFirst().c_str());
	printf("\nAddress: %s", me.getAddress().c_str());
	printf("\nCity: %s", me.getCity().c_str());
	printf("\nState: %s", me.getState().c_str());
	printf("\nZip: %d", me.getZip());
	printf("\nPhone: %d", me.getPhone());
}