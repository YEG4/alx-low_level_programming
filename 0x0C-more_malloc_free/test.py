import re
import os

def change_variable_names(code, variable_map):
    # Iterate over the variable map and replace variable names
    for old_name, new_name in variable_map.items():
        # Use regular expression to match variable names and replace them
        code = re.sub(r'\b%s\b' % re.escape(old_name), new_name, code)

    return code
for filename in os.listdir():
    
    # Read the C code from a .txt file
    if filename.endswith(".c"):
        print(filename)
        file_path = filename  # Update with your file path
        with open(filename, 'r') as file:
            c_code = file.read()

        # Define the variable map with old_name:new_name pairs
        print(c_code)
        variable_map = {
            's': 'new_string',
            'y': 'b',
            'c': 'character',
            'n': 'number',
            's': 'str', 
            'b': 'x',
            'dest': 'destination',
            'src': 'source',
            'i': 'index',
            'result': 'sum'
        }

        # Call the function to change variable names
        new_code = change_variable_names(c_code, variable_map)

        # Save the modified code to a .c file
        output_file_path = file_path  # Update with your desired output file path
        with open(output_file_path, 'w') as file:
            file.write(new_code)

print("Code transformation complete. Modified code saved to:", output_file_path)