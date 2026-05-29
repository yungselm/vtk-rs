// Include header file
#include<vtk_common_system.h>

// Default include in all modules
#include<vtkNew.h>
#include<vtkObjectBase.h>

// Include objects of this module
#include<vtkClientSocket.h>
#include<vtkDirectory.h>
#include<vtkExecutableRunner.h>
#include<vtkServerSocket.h>
#include<vtkSocket.h>
#include<vtkSocketCollection.h>
#include<vtkThreadMessager.h>
#include<vtkTimerLog.h>
#include<vtkTimerLog.h>
#include<vtkTimerLog.h>

// Implement declared functions
extern "C" vtkNew < vtkClientSocket > vtkClientSocket_new () {return vtkNew < vtkClientSocket > () ;}
extern "C" void vtkClientSocket_destructor (vtkNew < vtkClientSocket > sself) {sself . Reset () ; return ;}
extern "C" void * vtkClientSocket_get_ptr (vtkNew < vtkClientSocket > sself) {return sself . GetPointer () ;}
extern "C" int vtk_client_socket_connect_to_server(vtkNew<vtkClientSocket> sself, const char hostname, int port) { return sself->ConnectToServer(hostname, port); }
extern "C" bool vtk_client_socket_get_connecting_side(vtkNew<vtkClientSocket> sself) { return sself->GetConnectingSide(); }
extern "C" vtkNew < vtkDirectory > vtkDirectory_new () {return vtkNew < vtkDirectory > () ;}
extern "C" void vtkDirectory_destructor (vtkNew < vtkDirectory > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDirectory_get_ptr (vtkNew < vtkDirectory > sself) {return sself . GetPointer () ;}
extern "C" int vtk_directory_open(vtkNew<vtkDirectory> sself, const char dir) { return sself->Open(dir); }
extern "C" long long vtk_directory_get_number_of_files(vtkNew<vtkDirectory> sself) { return sself->GetNumberOfFiles(); }
extern "C" const char* vtk_directory_get_file(vtkNew<vtkDirectory> sself, long long index) { return sself->GetFile(index); }
extern "C" int vtk_directory_file_is_directory(vtkNew<vtkDirectory> sself, const char name) { return sself->FileIsDirectory(name); }
extern "C" const char* vtk_directory_get_current_working_directory(vtkNew<vtkDirectory> sself, char buf, unsigned int len) { return sself->GetCurrentWorkingDirectory(buf, len); }
extern "C" int vtk_directory_make_directory(vtkNew<vtkDirectory> sself, const char dir) { return sself->MakeDirectory(dir); }
extern "C" int vtk_directory_delete_directory(vtkNew<vtkDirectory> sself, const char dir) { return sself->DeleteDirectory(dir); }
extern "C" int vtk_directory_rename(vtkNew<vtkDirectory> sself, const char oldname, const char newname) { return sself->Rename(oldname, newname); }
extern "C" vtkNew < vtkExecutableRunner > vtkExecutableRunner_new () {return vtkNew < vtkExecutableRunner > () ;}
extern "C" void vtkExecutableRunner_destructor (vtkNew < vtkExecutableRunner > sself) {sself . Reset () ; return ;}
extern "C" void * vtkExecutableRunner_get_ptr (vtkNew < vtkExecutableRunner > sself) {return sself . GetPointer () ;}
extern "C" void vtk_executable_runner_execute(vtkNew<vtkExecutableRunner> sself) { sself->Execute(); }
extern "C" void vtk_executable_runner_set_timeout(vtkNew<vtkExecutableRunner> sself, double _arg) { sself->SetTimeout(_arg); }
extern "C" double vtk_executable_runner_get_timeout(vtkNew<vtkExecutableRunner> sself) { return sself->GetTimeout(); }
extern "C" void vtk_executable_runner_set_right_trim_result(vtkNew<vtkExecutableRunner> sself, bool _arg) { sself->SetRightTrimResult(_arg); }
extern "C" bool vtk_executable_runner_get_right_trim_result(vtkNew<vtkExecutableRunner> sself) { return sself->GetRightTrimResult(); }
extern "C" void vtk_executable_runner_right_trim_result_on(vtkNew<vtkExecutableRunner> sself) { sself->RightTrimResultOn(); }
extern "C" void vtk_executable_runner_right_trim_result_off(vtkNew<vtkExecutableRunner> sself) { sself->RightTrimResultOff(); }
extern "C" const char* vtk_executable_runner_get_command(vtkNew<vtkExecutableRunner> sself) { return sself->GetCommand(); }
extern "C" void vtk_executable_runner_set_command(vtkNew<vtkExecutableRunner> sself, const char arg) { sself->SetCommand(arg); }
extern "C" const char* vtk_executable_runner_get_std_out(vtkNew<vtkExecutableRunner> sself) { return sself->GetStdOut(); }
extern "C" const char* vtk_executable_runner_get_std_err(vtkNew<vtkExecutableRunner> sself) { return sself->GetStdErr(); }
extern "C" int vtk_executable_runner_get_return_value(vtkNew<vtkExecutableRunner> sself) { return sself->GetReturnValue(); }
extern "C" vtkNew < vtkServerSocket > vtkServerSocket_new () {return vtkNew < vtkServerSocket > () ;}
extern "C" void vtkServerSocket_destructor (vtkNew < vtkServerSocket > sself) {sself . Reset () ; return ;}
extern "C" void * vtkServerSocket_get_ptr (vtkNew < vtkServerSocket > sself) {return sself . GetPointer () ;}
extern "C" int vtk_server_socket_create_server(vtkNew<vtkServerSocket> sself, int port) { return sself->CreateServer(port); }
extern "C" int vtk_server_socket_get_server_port(vtkNew<vtkServerSocket> sself) { return sself->GetServerPort(); }
extern "C" vtkNew < vtkSocketCollection > vtkSocketCollection_new () {return vtkNew < vtkSocketCollection > () ;}
extern "C" void vtkSocketCollection_destructor (vtkNew < vtkSocketCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSocketCollection_get_ptr (vtkNew < vtkSocketCollection > sself) {return sself . GetPointer () ;}
extern "C" int vtk_socket_collection_select_sockets(vtkNew<vtkSocketCollection> sself, unsigned long msec) { return sself->SelectSockets(msec); }
extern "C" vtkNew < vtkThreadMessager > vtkThreadMessager_new () {return vtkNew < vtkThreadMessager > () ;}
extern "C" void vtkThreadMessager_destructor (vtkNew < vtkThreadMessager > sself) {sself . Reset () ; return ;}
extern "C" void * vtkThreadMessager_get_ptr (vtkNew < vtkThreadMessager > sself) {return sself . GetPointer () ;}
extern "C" void vtk_thread_messager_wait_for_message(vtkNew<vtkThreadMessager> sself) { sself->WaitForMessage(); }
extern "C" void vtk_thread_messager_send_wake_message(vtkNew<vtkThreadMessager> sself) { sself->SendWakeMessage(); }
extern "C" void vtk_thread_messager_enable_wait_for_receiver(vtkNew<vtkThreadMessager> sself) { sself->EnableWaitForReceiver(); }
extern "C" void vtk_thread_messager_disable_wait_for_receiver(vtkNew<vtkThreadMessager> sself) { sself->DisableWaitForReceiver(); }
extern "C" void vtk_thread_messager_wait_for_receiver(vtkNew<vtkThreadMessager> sself) { sself->WaitForReceiver(); }
extern "C" vtkNew < vtkTimerLog > vtkTimerLog_new () {return vtkNew < vtkTimerLog > () ;}
extern "C" void vtkTimerLog_destructor (vtkNew < vtkTimerLog > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTimerLog_get_ptr (vtkNew < vtkTimerLog > sself) {return sself . GetPointer () ;}
extern "C" void vtk_timer_log_set_logging(vtkNew<vtkTimerLog> sself, int v) { sself->SetLogging(v); }
extern "C" int vtk_timer_log_get_logging(vtkNew<vtkTimerLog> sself) { return sself->GetLogging(); }
extern "C" void vtk_timer_log_logging_on(vtkNew<vtkTimerLog> sself) { sself->LoggingOn(); }
extern "C" void vtk_timer_log_logging_off(vtkNew<vtkTimerLog> sself) { sself->LoggingOff(); }
extern "C" void vtk_timer_log_set_max_entries(vtkNew<vtkTimerLog> sself, int a) { sself->SetMaxEntries(a); }
extern "C" int vtk_timer_log_get_max_entries(vtkNew<vtkTimerLog> sself) { return sself->GetMaxEntries(); }
extern "C" void vtk_timer_log_dump_log(vtkNew<vtkTimerLog> sself, const char filename) { sself->DumpLog(filename); }
extern "C" void vtk_timer_log_mark_start_event(vtkNew<vtkTimerLog> sself, const char EventString) { sself->MarkStartEvent(EventString); }
extern "C" void vtk_timer_log_mark_end_event(vtkNew<vtkTimerLog> sself, const char EventString) { sself->MarkEndEvent(EventString); }
extern "C" void vtk_timer_log_insert_timed_event(vtkNew<vtkTimerLog> sself, const char EventString, double time, int cpuTicks) { sself->InsertTimedEvent(EventString, time, cpuTicks); }
extern "C" int vtk_timer_log_get_number_of_events(vtkNew<vtkTimerLog> sself) { return sself->GetNumberOfEvents(); }
extern "C" int vtk_timer_log_get_event_indent(vtkNew<vtkTimerLog> sself, int i) { return sself->GetEventIndent(i); }
extern "C" double vtk_timer_log_get_event_wall_time(vtkNew<vtkTimerLog> sself, int i) { return sself->GetEventWallTime(i); }
extern "C" const char* vtk_timer_log_get_event_string(vtkNew<vtkTimerLog> sself, int i) { return sself->GetEventString(i); }
extern "C" void vtk_timer_log_mark_event(vtkNew<vtkTimerLog> sself, const char EventString) { sself->MarkEvent(EventString); }
extern "C" void vtk_timer_log_reset_log(vtkNew<vtkTimerLog> sself) { sself->ResetLog(); }
extern "C" void vtk_timer_log_cleanup_log(vtkNew<vtkTimerLog> sself) { sself->CleanupLog(); }
extern "C" double vtk_timer_log_get_universal_time(vtkNew<vtkTimerLog> sself) { return sself->GetUniversalTime(); }
extern "C" double vtk_timer_log_get_cpu_time(vtkNew<vtkTimerLog> sself) { return sself->GetCPUTime(); }
extern "C" void vtk_timer_log_start_timer(vtkNew<vtkTimerLog> sself) { sself->StartTimer(); }
extern "C" void vtk_timer_log_stop_timer(vtkNew<vtkTimerLog> sself) { sself->StopTimer(); }
extern "C" double vtk_timer_log_get_elapsed_time(vtkNew<vtkTimerLog> sself) { return sself->GetElapsedTime(); }
