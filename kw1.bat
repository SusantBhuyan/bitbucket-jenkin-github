cd "E:\Meteonic\Meteonic_Tool\Tools_demo\klocwork\Demo"
::Please change the project path
kwinject gcc ABR.c, assert.c, mlk_might_must.c
kwbuildproject --url http://localhost:8086/kw-demo-Jenkins -o E:\Meteonic\Meteonic_Tool\Tools_demo\klocwork\Demo\kwtable-jenkins kwinject.out --incremental
kwadmin --url http://localhost:8086/ load kw-demo-Jenkins E:\Meteonic\Meteonic_Tool\Tools_demo\klocwork\Demo\kwtable-jenkins
pause