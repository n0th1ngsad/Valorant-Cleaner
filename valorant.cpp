#include <iostream>
#include <windows.h>

void ValoClean() {
    system("del /s /q C:\\Users\\%username%\\AppData\\Local\\VALORANT > NUL 2 > NUL");
    system("del /s /q C:\\Users\\%username%\\AppData\\Local\\Riot Games > NUL 2 > NUL");
    system("del /s /q C:\\ProgramData\\Riot Games > NUL 2 > NUL");
    system("del /s /q C:\\Users\\%username%\\AppData\\Local\\Riot Games > NUL 2 > NUL");
    system("reg delete HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\ExplorerHKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Riot Game valorant.live > NUL 2 > NUL");
    system("reg delete HKEY_LOCAL_MACHINE\\system(skCrypt\\CurrentControlSet\\Services\\vgk\\Security /f > NUL 2 > NUL");
    system("reg delete HKEY_LOCAL_MACHINE\\system(skCrypt\\CurrentControlSet\\Services\\vgc\\Security /f > NUL 2 > NUL");
    system("reg delete HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Riot Vangard /f > NUL 2 > NUL");
    system("reg delete HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\RADAR\\HeapLeakDetection\\DiagnosedApplications\\VALORANT - Win64 - Shipping.ex /f > NUL 2 > NUL");
    system("reg delete HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\UserAssist /f > NUL 2 > NUL");
    system("reg delete HKEY_CLASSES_ROOT\\riotclient /f > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\VALORANT > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Riot Games > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\ProgramData\\Riot Games > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\ProgramData\\Application Data\\Riot Games > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Program Files\\Riot Vangard > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Program Files\\Riot Games > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Documents and Settings\\All Users\\Riot Games > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Riot Games > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\Local Settings\\Riot Games > NUL 2 > NUL");
    system("del /f /q C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Riot Games\\VALORANT.lnk > NUL 2 > NUL");
    system("del C:\\Riot Games\\VALORANT\\live\\Manifest_NonFSFiles_Win64.txt /f /q > NUL 2 > NUL");
    system("del C:\\Riot Games\\VALORANT\\live\\Engine\\Binaries\\ThirdParty\\CEF3\\Win64\\icdtl.dat /f /q > NUL 2 > NUL");
    system("del C:\\Riot Games\\Riot Client\\X\\natives_blob.bin /f /q > NUL 2 > NUL");
    system("del C:\\Riot Games\\Riot Client\\X\\icdtl.dat /f /q > NUL 2 > NUL");
    system("del C:\\Riot Games\\Riot Client\\X\\Plgins\\plgin - manifest.json /f /q > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\vgkbootstats.dat > NUL 2 > NUL");
    system("reg delete HKEY_LOCAL_MACHINE\\system(skCrypt\\HardwareConfig /f > NUL 2 > NUL");
    system("del /s /q /f %system(skCryptdrive%\\$Recycle.bin > NUL 2 > NUL");
    system("del /s /q D:\\system(skCrypt Volume Information\\tracking.log > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\win.ini > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\memory.dmp > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\WindowsUpdate.log > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\System32\\LogFiles\\WMI\\Wifi.etl > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\System32\\LogFiles\\WMI\\RadioMgr.etl > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\System32\\LogFiles\\WMI\\NtfsLog.etl > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\System32\\LogFiles\\WMI\\NetCore.etl > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\System32\\LogFiles\\WMI\\Microsoft - Windows - Rdp - Graphics - RdpIdd - Trace.etl > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\System32\\LogFiles\\WMI\\LwtNetLog.etl > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\UserviceProfiles\\NetworkService\\NTSER.DAT > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\UserviceProfiles\\LocalService\\AppData\\Local\\Microsoft\\Windows\\qwavecache.dat > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\Logs\\DISM\\dism.log > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\DirectX.log > NUL 2 > NUL");
    system("del /s /q C:\\Users\\Public\\Desktop\\VALORANT.lnk > NUL 2 > NUL");
    system("del /s /q C:\\Users\\%username%\\ntser.dat.LOG2 > NUL 2 > NUL");
    system("del /s /q C:\\Users\\%username%\\ntser.dat.LOG1 > NUL 2 > NUL");
    system("del /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\container.dat > NUL 2 > NUL");
    system("del /s /q C:\\Users\\%username%\\NTSER.DAT > NUL 2 > NUL");
    system("del /s /q C:\\Users\\%username%\\AppData\\Local\\UnrealEngine\\4.23\\Saved\\Config\\WindowsClient\\Manifest.ini > NUL 2 > NUL");
    system("del /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\container.dat > NUL 2 > NUL");
    system("del /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Vault\\UserProfileRoaming\\Latest.dat > NUL 2 > NUL");
    system("del /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\OneDrive\\logs\\Common\\DeviceHealthSummaryConfigration.ini > NUL 2 > NUL");
    system("del /s /q C:\\Users\\%username%\\AppData\\Local\\IconCache.db > NUL 2 > NUL");
    system("del /s /q C:\\Users\\%username%\\AppData\\Local\\AC\\INetCookies\\ESE\\container.dat > NUL 2 > NUL");
    system("del /s /q C:\\system(skCrypt Volume Information\\tracking.log > NUL 2 > NUL");
    system("del /s /q C:\\ProgramData\\Microsoft\\Windows\\DeviceMetadataCache\\dmrc.idx > NUL 2 > NUL");
    system("del /s /q C:\\Config.Msi > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\Temporary Internet Files > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Windows\\logs\\CBS > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Windows\\Temp > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Windows\\System32\\config\\system(skCryptprofile\\AppData\\Local\\ScreenTime > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Windows\\System32\\config\\system(skCryptprofile\\AppData\\Local\\Microsoft\\Vault\\UserProfileRoaming > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Windows\\System32\\config\\system(skCryptprofile\\AppData\\Local\\D3DSCache > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Windows\\System32\\config\\TxR > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Windows\\System32\\WDI\\LogFiles\\StartpInfo > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Windows\\System32\\WDI\\LogFiles > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Windows\\SoftwareDistribution > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Windows\\UserviceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\deliveryOptimization\\Logs > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Windows\\UserviceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\State > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Protect > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\VirtalStore > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\UnrealEngine > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Temp > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.Search_cw5n1h2txyewy\\LocalState\\DeviceSearchCache > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.Search_cw5n1h2txyewy\\LocalState\\ConstraintIndex > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WER > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IEDownloadHistory > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompataCache > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatCache > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\Caches > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Terminal Server Client\\Cache > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\CacheStorage > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\D3DSCache > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\CrashDmps > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\ConnectedDevicesPlatform > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\ProgramData\\NVIDIA Corporation\\NV_Cache > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\ProgramData\\NVIDIA Corporation\\Drs\\nvAppTimestamps > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\ProgramData\\Microsoft\\Windows\\WER > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\PerfLogs > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Documents and Settings\\%username%\\AppData\\Local\\Application Data\\Microsoft\\Windows\\Caches > NUL 2 > NUL");
    system("RMDIR /S /Q %localappdata%\\Microsoft\\Windows\\Caches > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\System32\\restore\\MachineGuid.txt > NUL 2 > NUL");
    system("del /s /q C:\\Users\\Public\\Libraries\\collection.dat > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\system(skCrypt Volume Information\\IndexerVolumeGuid > NUL 2 > NUL");
    system("del /s /q C:\\system(skCrypt Volume Information\\WPSettings.dat > NUL 2 > NUL");
    system("del /s /q C:\\system(skCrypt Volume Information\\tracking.log > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\ProgramData\\Microsoft\\Windows\\WER > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\Public\\Shared Files > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\INF\\setpapi.dev.log > NUL 2 > NUL");
    system("del /s /q C:\\Windows\\INF\\setpapi.setp.log > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\Users\\Public\\Libraries > NUL 2 > NUL");
    system("RMDIR /S /Q C:\\MSOCache > NUL 2 > NUL");
    system("del /s /q C:\ProgramData\\ntser.pol > NUL 2 > NUL");
    system("del /s /q C:\\Users\\Defalt\\NTSER.DAT > NUL 2 > NUL");
    system("%systemdrive%\\desktop.ini > NUL 2 > NUL");
    system("netsh winsock reset > NUL 2 > NUL");
    system("sc stop vgk > NUL 2 > NUL");
    system("sc delete vgk > NUL 2 > NUL");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\vgk\\Security\" /f > NUL 2 > NUL");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\vgc\\Security\" /f > NUL 2 > NUL");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Riot Vangard\" /f > NUL 2 > NUL");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\RADAR\\HeapLeakDetection\\DiagnosedApplications\\VALORANT-Win64-Shipping.exe\" /f > NUL 2 > NUL");
    system("reg delete \"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\UserAssist\\{FA99DFC7-6AC2-453A-A5E2-5E2AFF4507BD}\\Count\" /f > NUL 2 > NUL");
    system("reg delete \"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\UserAssist\\{F4E57C4B-2036-45F0-A9AB-443BCFE33D9F}\\Count\" /f > NUL 2 > NUL");
    system("reg delete \"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\UserAssist\\{F2A1CB5A-E3CC-4A2E-AF9D-505A7009D442}\\Count\" /f > NUL 2 > NUL");
    system("reg delete \"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\UserAssist\\{CEBFF5CD-ACE2-4F4F-9178-9926F41749EA}\\Count\" /f > NUL 2 > NUL");
    system("reg delete \"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\UserAssist\\{CAA59E3C-4792-41A5-9909-6A6A8D32490E}\\Count\" /f > NUL 2 > NUL");
    system("reg delete \"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\UserAssist\\{BCB48336-4DDD-48FF-BB0B-D3190DACB3E2}\\Count\" /f > NUL 2 > NUL");
    system("reg delete \"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\UserAssist\\{B267E3AD-A825-4A09-82B9-EEC22AA3B847}\\Count\" /f > NUL 2 > NUL");
    system("reg delete \"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\UserAssist\\{A3D53349-6E61-4557-8FC7-0028EDCEEBF6}\\Count\" /f > NUL 2 > NUL");
    system("reg delete \"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\UserAssist\\{9E04CAB2-CC14-11DF-BB8C-A2F1DED72085}\\Count\" /f > NUL 2 > NUL");
    system("reg delete \"HKEY_CLASSES_ROOT\\riotclient\" /f > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\VALORANT\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Riot Games\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\ProgramData\\Riot Games\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\ProgramData\\Application Data\\Riot Games\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Program Files\\Riot Vangard\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Program Files\\Riot Games\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Documents and Settings\\All Users\\Riot Games\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Riot Games\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\Local Settings\\Riot Games\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\logs\\CBS\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\Temp\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\ScreenTime\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\Vault\\UserProfileRoaming\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\D3DSCache\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\System32\\config\\TxR\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\System32\\WDI\\LogFiles\\StartpInfo\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\System32\\WDI\\LogFiles\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\SoftwareDistribution\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\UserviceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\deliveryOptimization\\Logs\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\UserviceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\State\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\Temporary Internet Files\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\logs\\CBS\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\Temp\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\ScreenTime\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\Vault\\UserProfileRoaming\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\D3DSCache\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\System32\\config\\TxR\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\System32\\WDI\\LogFiles\\StartpInfo\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\System32\\WDI\\LogFiles\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\SoftwareDistribution\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Windows\\UserviceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\deliveryOptimization\\Logs\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Protect\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\VirtalStore\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\UnrealEngine\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\Temp\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.Search_cw5n1h2txyewy\\LocalState\\DeviceSearchCache\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.Search_cw5n1h2txyewy\\LocalState\\ConstraintIndex\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WER\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IEDownloadHistory\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompataCache\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatCache\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\Caches\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Terminal Server Client\\Cache\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\CacheStorage\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\D3DSCache\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\CrashDmps\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Users\\%username%\\AppData\\Local\\ConnectedDevicesPlatform\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\ProgramData\\NVIDIA Corporation\\NV_Cache\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\ProgramData\\NVIDIA Corporation\\Drs\\nvAppTimestamps\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\ProgramData\\Microsoft\\Windows\\WER\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\PerfLogs\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"C:\\Documents and Settings\\%username%\\AppData\\Local\\Application Data\\Microsoft\\Windows\\Caches\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"%localappdata%\\Microsoft\\Windows\\Caches\" > NUL 2 > NUL");
    system("del /s /q \"C:\\Windows\\System32\\restore\\MachineGuid.txt\" > NUL 2 > NUL");
    system("del /s /q \"%systemdrive%\\Users\\Public\\Libraries\\collection.dat\" > NUL 2 > NUL");
    system("del /s /q \"%systemdrive%\\System Volume Information\\IndexerVolumeGuid\" > NUL 2 > NUL");
    system("del /s /q \"%systemdrive%\\System Volume Information\\WPSettings.dat\" > NUL 2 > NUL");
    system("del /s /q \"%systemdrive%\\System Volume Information\\tracking.log\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"%systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"%systemdrive%\\Users\\Public\\Shared Files\" > NUL 2 > NUL");
    system("del /s /q \"%systemdrive%\\Windows\\INF\\setpapi.dev.log\" > NUL 2 > NUL");
    system("del /s /q \"%systemdrive%\\Windows\\INF\\setpapi.setp.log\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"%systemdrive%\\Users\\Public\\Libraries\" > NUL 2 > NUL");
    system("RMDIR /S /Q \"%systemdrive%\\MSOCache\" > NUL 2 > NUL");
    system("del /s /q \"%systemdrive%\\ProgramData\\ntser.pol\" > NUL 2 > NUL");
    system("del /s /q \"%systemdrive%\\Users\\Defalt\\NTSER.DAT\" > NUL 2 > NUL");
    system("del /s /q \"%systemdrive%\\Recovery\\ntser.sys\" > NUL 2 > NUL");
    system("del /s /q \"%systemdrive%\\desktop.ini\" > NUL 2 > NUL");
}