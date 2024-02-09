# punch-clock
Made a simple desktop app for someone that wanted to log their time for work automatically.

To compile on windows:
  1. Go to [msys2](https://www.msys2.org/) download the installer, and follow the instructions.
  2. (optional) Add the bin folder to your PATH on windows (Search -> Edit the System Environment Variables -> Environment Variables -> Click Path -> Edit -> New).
  The default installation path is C:\msys64\ucrt64\bin
  3. gcc punchClock.c -o (whatever you want to name it) -> eg gcc punchClock.c -o punchClock
  4. Run it! Press enter once after running to punch out, and then press enter a second time to quit.
  5. A CSV file will be generated in the same folder as the executable. It'll log your times in CSV which you can then import to things like Excel or Google Sheets:
     ![image](https://github.com/Bradley-Lupien/punch-clock/assets/77309461/c5451c0c-8d87-4964-abc3-45c83cc54ba8)

