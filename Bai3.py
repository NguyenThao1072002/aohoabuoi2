from ._anvil_designer import Form1Template
from anvil import *
import anvil.server

class Form1(Form1Template):
    def __init__(self, **properties):
        # Set Form properties and Data Bindings.
        self.init_components(**properties)

        # Any code you write here will run before the form opens.

    def insertionSort(self, arr):
        for i in range(1, len(arr)):
            key = arr[i]
            j = i - 1
            while j >= 0 and key < arr[j]:
                arr[j + 1] = arr[j]
                j -= 1
            arr[j + 1] = key

    def button_1_click(self, **event_args):
        input_list = [int(x.strip()) for x in self.Nhap_day_so.text.split()]
        sorted_list = anvil.server.call('selection_sort', input_list)
        self.text_box_1.text = ' '.join(map(str, sorted_list))

    def Thuc_hien_click(self, **event_args):
        input_list = [int(x.strip()) for x in self.Nhap_day_so.text.split()]
        sorted_list = anvil.server.call('selection_sort', input_list)
        self.text_box_1.text = ' '.join(map(str, sorted_list))

    
