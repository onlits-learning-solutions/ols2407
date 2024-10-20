import json
import os
from datetime import datetime


class Holidays:
    def __init__(self):
        self.current_full_date = datetime.now().date()
        self.current_date = datetime.now().strftime("%d")
        self.current_month = datetime.now().strftime("%m")
        self.current_year = datetime.now().year
        self.holiday_file = "./Holiday/holidays.json"
    
    def __chKFile(self):
        if not os.path.isfile(self.holiday_file):
            with open(self.holiday_file, "w") as hday:
                hday.write(json.dumps({"id":1,"date":"15-08","name":"Independence Day of India","description":"August 15th is celebrated as Independence Day in India, commemorating the country's independence from British rule in 1947. The day also marks the partition of the subcontinent into India and Pakistan, which took place on August 14 to 15, 1947.", "first_held":"1947-8-15"}))

    def __loadHolidays(self):
        self.__chKFile()
        with open(self.holiday_file, "r") as hdays:
            return json.loads(hdays.read())

    def today(self):
        all_event = self.__loadHolidays()
        for i in all_event:
            if all_event.get(i).get('date') == f"{self.current_date}-{self.current_month}":
                event = all_event.get(i)
                print(f"Event Name : {event.get("name")}\nEvent Description : {event.get("description")}\n First Held : {event.get("first_held")}")
                break

    def __validate_date_format(self, user_input):
        try:
            date_object = datetime.strptime(user_input, "%d-%m-%Y")
            return True
        except ValueError:
            return False 
        
    def getholiday(self, date):
         # date format will be DD/MM/YYYY
        if self.__validate_date_format(date):
            date = datetime.strptime(date, "%d-%m-%Y")
            all_event = self.__loadHolidays()
            for i in all_event:
                if all_event.get(i).get('date') == f"{date.strftime("%d")}-{date.strftime("%m")}":
                    event = all_event.get(i)
                    print(f"Event Name : {event.get("name")}\nEvent Description : {event.get("description")}\n First Held : {event.get("first_held")}")
                    break
        else:
            print("Date should be in format DD-MM-YYYY")
    
    def setholiday(self, date, name, description, first_held="unknown" ):
       all_holdays = self.__loadHolidays()
       if self.__validate_date_format(date):
            date = datetime.strptime(date, "%d-%m-%Y")
          
            new_holiday = {"date":f"{date.strftime("%d")}-{date.strftime("%m")}","name":name, "description":description, "first_held":first_held}
            all_holdays[str(len(all_holdays)+1)] = new_holiday
            with open(self.holiday_file, 'w') as file:
                json.dump(all_holdays, file, indent=4)
            print(f"{name} added to Holidays")
       else:
           print("Date should be in format DD-MM-YYYY")

    def updateholiday(self, old_date, new_date, name, description, first_held="unknown" ):
       all_holdays = self.__loadHolidays()
       if self.__validate_date_format(old_date) and self.__validate_date_format(new_date):
            old_date = datetime.strptime(old_date, "%d-%m-%Y")
            new_date = datetime.strptime(new_date, "%d-%m-%Y")
            updated_holiday = {"date":f"{new_date.strftime("%d")}-{new_date.strftime("%m")}","name":name, "description":description, "first_held":first_held}
            for i in all_holdays:
                if all_holdays.get(i).get('date') == f"{old_date.strftime("%d")}-{old_date.strftime("%m")}":
                    all_holdays[str(i)]=updated_holiday
                    break
            with open(self.holiday_file, 'w') as file:
                json.dump(all_holdays, file, indent=4)
            print(f"{name} added to Holidays")
       else:
           print("Date should be in format DD-MM-YYYY")

    def deleteholiday(self, date):
       all_holidays = self.__loadHolidays()
       if self.__validate_date_format(date):
            usr_date = datetime.strptime(date, "%d-%m-%Y")
            for i in all_holidays:
                if all_holidays.get(i).get('date') == f"{usr_date.strftime("%d")}-{usr_date.strftime("%m")}":
                    all_holidays.pop(i)
                    break
            with open(self.holiday_file, 'w') as file:
                json.dump(all_holidays, file, indent=4)
            print(f"{date} removed from Holidays")
       else:
           print("Date should be in format DD-MM-YYYY")


        

