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

// Declare exported functions
extern "C" vtkNew < vtkClientSocket > vtkClientSocket_new () ;
extern "C" void vtkClientSocket_destructor (vtkNew < vtkClientSocket > sself) ;
extern "C" void * vtkClientSocket_get_ptr (vtkNew < vtkClientSocket > sself) ;
extern "C" int vtk_client_socket_connect_to_server(vtkNew<vtkClientSocket> sself, const char hostname, int port);
extern "C" bool vtk_client_socket_get_connecting_side(vtkNew<vtkClientSocket> sself);
extern "C" vtkNew < vtkDirectory > vtkDirectory_new () ;
extern "C" void vtkDirectory_destructor (vtkNew < vtkDirectory > sself) ;
extern "C" void * vtkDirectory_get_ptr (vtkNew < vtkDirectory > sself) ;
extern "C" int vtk_directory_open(vtkNew<vtkDirectory> sself, const char dir);
extern "C" long long vtk_directory_get_number_of_files(vtkNew<vtkDirectory> sself);
extern "C" const char* vtk_directory_get_file(vtkNew<vtkDirectory> sself, long long index);
extern "C" int vtk_directory_file_is_directory(vtkNew<vtkDirectory> sself, const char name);
extern "C" const char* vtk_directory_get_current_working_directory(vtkNew<vtkDirectory> sself, char buf, unsigned int len);
extern "C" int vtk_directory_make_directory(vtkNew<vtkDirectory> sself, const char dir);
extern "C" int vtk_directory_delete_directory(vtkNew<vtkDirectory> sself, const char dir);
extern "C" int vtk_directory_rename(vtkNew<vtkDirectory> sself, const char oldname, const char newname);
extern "C" vtkNew < vtkExecutableRunner > vtkExecutableRunner_new () ;
extern "C" void vtkExecutableRunner_destructor (vtkNew < vtkExecutableRunner > sself) ;
extern "C" void * vtkExecutableRunner_get_ptr (vtkNew < vtkExecutableRunner > sself) ;
extern "C" void vtk_executable_runner_execute(vtkNew<vtkExecutableRunner> sself);
extern "C" void vtk_executable_runner_set_timeout(vtkNew<vtkExecutableRunner> sself, double _arg);
extern "C" double vtk_executable_runner_get_timeout(vtkNew<vtkExecutableRunner> sself);
extern "C" void vtk_executable_runner_set_right_trim_result(vtkNew<vtkExecutableRunner> sself, bool _arg);
extern "C" bool vtk_executable_runner_get_right_trim_result(vtkNew<vtkExecutableRunner> sself);
extern "C" void vtk_executable_runner_right_trim_result_on(vtkNew<vtkExecutableRunner> sself);
extern "C" void vtk_executable_runner_right_trim_result_off(vtkNew<vtkExecutableRunner> sself);
extern "C" const char* vtk_executable_runner_get_command(vtkNew<vtkExecutableRunner> sself);
extern "C" void vtk_executable_runner_set_command(vtkNew<vtkExecutableRunner> sself, const char arg);
extern "C" const char* vtk_executable_runner_get_std_out(vtkNew<vtkExecutableRunner> sself);
extern "C" const char* vtk_executable_runner_get_std_err(vtkNew<vtkExecutableRunner> sself);
extern "C" int vtk_executable_runner_get_return_value(vtkNew<vtkExecutableRunner> sself);
extern "C" vtkNew < vtkServerSocket > vtkServerSocket_new () ;
extern "C" void vtkServerSocket_destructor (vtkNew < vtkServerSocket > sself) ;
extern "C" void * vtkServerSocket_get_ptr (vtkNew < vtkServerSocket > sself) ;
extern "C" int vtk_server_socket_create_server(vtkNew<vtkServerSocket> sself, int port);
extern "C" int vtk_server_socket_get_server_port(vtkNew<vtkServerSocket> sself);
extern "C" vtkNew < vtkSocketCollection > vtkSocketCollection_new () ;
extern "C" void vtkSocketCollection_destructor (vtkNew < vtkSocketCollection > sself) ;
extern "C" void * vtkSocketCollection_get_ptr (vtkNew < vtkSocketCollection > sself) ;
extern "C" int vtk_socket_collection_select_sockets(vtkNew<vtkSocketCollection> sself, unsigned long msec);
extern "C" vtkNew < vtkThreadMessager > vtkThreadMessager_new () ;
extern "C" void vtkThreadMessager_destructor (vtkNew < vtkThreadMessager > sself) ;
extern "C" void * vtkThreadMessager_get_ptr (vtkNew < vtkThreadMessager > sself) ;
extern "C" void vtk_thread_messager_wait_for_message(vtkNew<vtkThreadMessager> sself);
extern "C" void vtk_thread_messager_send_wake_message(vtkNew<vtkThreadMessager> sself);
extern "C" void vtk_thread_messager_enable_wait_for_receiver(vtkNew<vtkThreadMessager> sself);
extern "C" void vtk_thread_messager_disable_wait_for_receiver(vtkNew<vtkThreadMessager> sself);
extern "C" void vtk_thread_messager_wait_for_receiver(vtkNew<vtkThreadMessager> sself);
extern "C" vtkNew < vtkTimerLog > vtkTimerLog_new () ;
extern "C" void vtkTimerLog_destructor (vtkNew < vtkTimerLog > sself) ;
extern "C" void * vtkTimerLog_get_ptr (vtkNew < vtkTimerLog > sself) ;
extern "C" void vtk_timer_log_set_logging(vtkNew<vtkTimerLog> sself, int v);
extern "C" int vtk_timer_log_get_logging(vtkNew<vtkTimerLog> sself);
extern "C" void vtk_timer_log_logging_on(vtkNew<vtkTimerLog> sself);
extern "C" void vtk_timer_log_logging_off(vtkNew<vtkTimerLog> sself);
extern "C" void vtk_timer_log_set_max_entries(vtkNew<vtkTimerLog> sself, int a);
extern "C" int vtk_timer_log_get_max_entries(vtkNew<vtkTimerLog> sself);
extern "C" void vtk_timer_log_dump_log(vtkNew<vtkTimerLog> sself, const char filename);
extern "C" void vtk_timer_log_mark_start_event(vtkNew<vtkTimerLog> sself, const char EventString);
extern "C" void vtk_timer_log_mark_end_event(vtkNew<vtkTimerLog> sself, const char EventString);
extern "C" void vtk_timer_log_insert_timed_event(vtkNew<vtkTimerLog> sself, const char EventString, double time, int cpuTicks);
extern "C" int vtk_timer_log_get_number_of_events(vtkNew<vtkTimerLog> sself);
extern "C" int vtk_timer_log_get_event_indent(vtkNew<vtkTimerLog> sself, int i);
extern "C" double vtk_timer_log_get_event_wall_time(vtkNew<vtkTimerLog> sself, int i);
extern "C" const char* vtk_timer_log_get_event_string(vtkNew<vtkTimerLog> sself, int i);
extern "C" void vtk_timer_log_mark_event(vtkNew<vtkTimerLog> sself, const char EventString);
extern "C" void vtk_timer_log_reset_log(vtkNew<vtkTimerLog> sself);
extern "C" void vtk_timer_log_cleanup_log(vtkNew<vtkTimerLog> sself);
extern "C" double vtk_timer_log_get_universal_time(vtkNew<vtkTimerLog> sself);
extern "C" double vtk_timer_log_get_cpu_time(vtkNew<vtkTimerLog> sself);
extern "C" void vtk_timer_log_start_timer(vtkNew<vtkTimerLog> sself);
extern "C" void vtk_timer_log_stop_timer(vtkNew<vtkTimerLog> sself);
extern "C" double vtk_timer_log_get_elapsed_time(vtkNew<vtkTimerLog> sself);
