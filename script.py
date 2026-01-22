import os

import os

def discover_files(directory):
    for root, dirs, files in os.walk(directory):
        for file in files:
            full_path = os.path.join(root, file)
            if(full_path[-4::] == '.exe'):
                os.remove(full_path)

# Example usage
directory_path = "C:\codes\A2oJ"
discover_files(directory_path)
