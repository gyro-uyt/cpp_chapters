"""
# Create a Virtual environment:
python3 -m venv <nameOfVenv>

# Activate the virtual environment (Linux/MacOS)
source <nameOfVenv>/bin/activate

# Activate the virtual environment (windows)
<nameOfVenv>\Scripts\activate.bat
<nameOfVenv>\Scripts\activate.ps1 (powershell)

# Deactivate the virtual environment
deactivate
"""

"""
Once the virtual environment is activated, any packages that you install using pip will be 
installed in the virtual environment, rather than in the global python environment. 
You can create multiple venv's and have separate set of packets for each one.   

# You can use pip to install specific version of any module for the venv
pip install <moduleName>==<moduleVersion>
"""

"""
# The "requirements.txt" file

# Output the list of installed packages
pip freeze

# Write the list of installed packages to a file
pip freeze > requirements.text

# Install the packages listed in the requirements.txt file
pip install -r requirements.txt
"""

import pandas as pd
print(pd.__version__)

