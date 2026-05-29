pub trait VtkClientSocket: VtkSocket {
    fn new(&mut self) -> *mut core::ffi::c_void;
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void;
    fn new_instance(&mut self) -> *mut core::ffi::c_void;
    fn connect_to_server(
        &mut self,
        hostname: core::ffi::c_char,
        port: core::ffi::c_int,
    ) -> core::ffi::c_int;
    fn get_connecting_side(&mut self) -> bool;
}
pub trait VtkDirectory {
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void;
    fn new_instance(&mut self) -> *mut core::ffi::c_void;
    fn new(&mut self) -> *mut core::ffi::c_void;
    fn open(&mut self, dir: core::ffi::c_char) -> core::ffi::c_int;
    fn get_number_of_files(&mut self) -> core::ffi::c_uchar;
    fn get_file(&mut self, index: core::ffi::c_uchar) -> *const core::ffi::c_char;
    fn file_is_directory(&mut self, name: core::ffi::c_char) -> core::ffi::c_int;
    fn get_files(&mut self) -> *mut core::ffi::c_void;
    fn get_current_working_directory(
        &mut self,
        buf: core::ffi::c_char,
        len: core::ffi::c_uint,
    ) -> *const core::ffi::c_char;
    fn make_directory(&mut self, dir: core::ffi::c_char) -> core::ffi::c_int;
    fn delete_directory(&mut self, dir: core::ffi::c_char) -> core::ffi::c_int;
    fn rename(
        &mut self,
        oldname: core::ffi::c_char,
        newname: core::ffi::c_char,
    ) -> core::ffi::c_int;
}
pub trait VtkExecutableRunner {
    fn new(&mut self) -> *mut core::ffi::c_void;
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void;
    fn new_instance(&mut self) -> *mut core::ffi::c_void;
    fn execute(&mut self) -> ();
    fn set_timeout(&mut self, _arg: core::ffi::c_double) -> ();
    fn get_timeout(&mut self) -> core::ffi::c_double;
    fn set_right_trim_result(&mut self, _arg: bool) -> ();
    fn get_right_trim_result(&mut self) -> bool;
    fn right_trim_result_on(&mut self) -> ();
    fn right_trim_result_off(&mut self) -> ();
    fn get_command(&mut self) -> *const core::ffi::c_char;
    fn set_command(&mut self, arg: core::ffi::c_char) -> ();
    fn get_std_out(&mut self) -> *const core::ffi::c_char;
    fn get_std_err(&mut self) -> *const core::ffi::c_char;
    fn get_return_value(&mut self) -> core::ffi::c_int;
}
pub trait VtkServerSocket: VtkSocket {
    fn new(&mut self) -> *mut core::ffi::c_void;
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void;
    fn new_instance(&mut self) -> *mut core::ffi::c_void;
    fn create_server(&mut self, port: core::ffi::c_int) -> core::ffi::c_int;
    fn wait_for_connection(
        &mut self,
        msec: core::ffi::c_ulong,
    ) -> *mut core::ffi::c_void;
    fn get_server_port(&mut self) -> core::ffi::c_int;
}
pub trait VtkSocket {
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void;
    fn new_instance(&mut self) -> *mut core::ffi::c_void;
    fn get_connected(&mut self) -> core::ffi::c_int;
    fn close_socket(&mut self) -> ();
    fn send(&mut self, data: (), length: core::ffi::c_int) -> core::ffi::c_int;
    fn receive(
        &mut self,
        data: (),
        length: core::ffi::c_int,
        readFully: core::ffi::c_int,
    ) -> core::ffi::c_int;
    fn get_socket_descriptor(&mut self) -> core::ffi::c_int;
    fn select_sockets(
        &mut self,
        sockets_to_select: core::ffi::c_int,
        size: core::ffi::c_int,
        msec: core::ffi::c_ulong,
        selected_index: core::ffi::c_int,
    ) -> core::ffi::c_int;
}
pub trait VtkSocketCollection {
    fn new(&mut self) -> *mut core::ffi::c_void;
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void;
    fn new_instance(&mut self) -> *mut core::ffi::c_void;
    fn add_item(&mut self, soc: *mut core::ffi::c_void) -> ();
    fn select_sockets(&mut self, msec: core::ffi::c_ulong) -> core::ffi::c_int;
    fn get_last_selected_socket(&mut self) -> *mut core::ffi::c_void;
    fn replace_item(&mut self, i: core::ffi::c_int, p1: *mut core::ffi::c_void) -> ();
}
pub trait VtkThreadMessager {
    fn new(&mut self) -> *mut core::ffi::c_void;
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void;
    fn new_instance(&mut self) -> *mut core::ffi::c_void;
    fn wait_for_message(&mut self) -> ();
    fn send_wake_message(&mut self) -> ();
    fn enable_wait_for_receiver(&mut self) -> ();
    fn disable_wait_for_receiver(&mut self) -> ();
    fn wait_for_receiver(&mut self) -> ();
}
pub trait VtkTimerLog {
    fn new(&mut self) -> *mut core::ffi::c_void;
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void;
    fn new_instance(&mut self) -> *mut core::ffi::c_void;
    fn set_logging(&mut self, v: core::ffi::c_int) -> ();
    fn get_logging(&mut self) -> core::ffi::c_int;
    fn logging_on(&mut self) -> ();
    fn logging_off(&mut self) -> ();
    fn set_max_entries(&mut self, a: core::ffi::c_int) -> ();
    fn get_max_entries(&mut self) -> core::ffi::c_int;
    fn dump_log(&mut self, filename: core::ffi::c_char) -> ();
    fn mark_start_event(&mut self, EventString: core::ffi::c_char) -> ();
    fn mark_end_event(&mut self, EventString: core::ffi::c_char) -> ();
    fn insert_timed_event(
        &mut self,
        EventString: core::ffi::c_char,
        time: core::ffi::c_double,
        cpuTicks: core::ffi::c_int,
    ) -> ();
    fn get_number_of_events(&mut self) -> core::ffi::c_int;
    fn get_event_indent(&mut self, i: core::ffi::c_int) -> core::ffi::c_int;
    fn get_event_wall_time(&mut self, i: core::ffi::c_int) -> core::ffi::c_double;
    fn get_event_string(&mut self, i: core::ffi::c_int) -> *const core::ffi::c_char;
    fn get_event_type(&mut self, i: core::ffi::c_int) -> *mut core::ffi::c_void;
    fn mark_event(&mut self, EventString: core::ffi::c_char) -> ();
    fn reset_log(&mut self) -> ();
    fn cleanup_log(&mut self) -> ();
    fn get_universal_time(&mut self) -> core::ffi::c_double;
    fn get_cpu_time(&mut self) -> core::ffi::c_double;
    fn start_timer(&mut self) -> ();
    fn stop_timer(&mut self) -> ();
    fn get_elapsed_time(&mut self) -> core::ffi::c_double;
}
impl VtkClientSocket for vtkClientSocket {
    fn new(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_client_socket_new(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_client_socket_new(self.0) }
    }
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_client_socket_safe_down_cast(
                sself: *mut core::ffi::c_void,
                o: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_client_socket_safe_down_cast(self.0, o) }
    }
    fn new_instance(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_client_socket_new_instance(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_client_socket_new_instance(self.0) }
    }
    fn connect_to_server(
        &mut self,
        hostname: core::ffi::c_char,
        port: core::ffi::c_int,
    ) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_client_socket_connect_to_server(
                sself: *mut core::ffi::c_void,
                hostname: core::ffi::c_char,
                port: core::ffi::c_int,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_client_socket_connect_to_server(self.0, hostname, port) }
    }
    fn get_connecting_side(&mut self) -> bool {
        unsafe extern "C" {
            fn vtk_client_socket_get_connecting_side(
                sself: *mut core::ffi::c_void,
            ) -> bool;
        }
        unsafe { vtk_client_socket_get_connecting_side(self.0) }
    }
}
impl VtkDirectory for vtkDirectory {
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_directory_safe_down_cast(
                sself: *mut core::ffi::c_void,
                o: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_directory_safe_down_cast(self.0, o) }
    }
    fn new_instance(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_directory_new_instance(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_directory_new_instance(self.0) }
    }
    fn new(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_directory_new(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_directory_new(self.0) }
    }
    fn open(&mut self, dir: core::ffi::c_char) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_directory_open(
                sself: *mut core::ffi::c_void,
                dir: core::ffi::c_char,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_directory_open(self.0, dir) }
    }
    fn get_number_of_files(&mut self) -> core::ffi::c_uchar {
        unsafe extern "C" {
            fn vtk_directory_get_number_of_files(
                sself: *mut core::ffi::c_void,
            ) -> core::ffi::c_uchar;
        }
        unsafe { vtk_directory_get_number_of_files(self.0) }
    }
    fn get_file(&mut self, index: core::ffi::c_uchar) -> *const core::ffi::c_char {
        unsafe extern "C" {
            fn vtk_directory_get_file(
                sself: *mut core::ffi::c_void,
                index: core::ffi::c_uchar,
            ) -> *const core::ffi::c_char;
        }
        unsafe { vtk_directory_get_file(self.0, index) }
    }
    fn file_is_directory(&mut self, name: core::ffi::c_char) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_directory_file_is_directory(
                sself: *mut core::ffi::c_void,
                name: core::ffi::c_char,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_directory_file_is_directory(self.0, name) }
    }
    fn get_files(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_directory_get_files(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_directory_get_files(self.0) }
    }
    fn get_current_working_directory(
        &mut self,
        buf: core::ffi::c_char,
        len: core::ffi::c_uint,
    ) -> *const core::ffi::c_char {
        unsafe extern "C" {
            fn vtk_directory_get_current_working_directory(
                sself: *mut core::ffi::c_void,
                buf: core::ffi::c_char,
                len: core::ffi::c_uint,
            ) -> *const core::ffi::c_char;
        }
        unsafe { vtk_directory_get_current_working_directory(self.0, buf, len) }
    }
    fn make_directory(&mut self, dir: core::ffi::c_char) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_directory_make_directory(
                sself: *mut core::ffi::c_void,
                dir: core::ffi::c_char,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_directory_make_directory(self.0, dir) }
    }
    fn delete_directory(&mut self, dir: core::ffi::c_char) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_directory_delete_directory(
                sself: *mut core::ffi::c_void,
                dir: core::ffi::c_char,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_directory_delete_directory(self.0, dir) }
    }
    fn rename(
        &mut self,
        oldname: core::ffi::c_char,
        newname: core::ffi::c_char,
    ) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_directory_rename(
                sself: *mut core::ffi::c_void,
                oldname: core::ffi::c_char,
                newname: core::ffi::c_char,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_directory_rename(self.0, oldname, newname) }
    }
}
impl VtkExecutableRunner for vtkExecutableRunner {
    fn new(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_executable_runner_new(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_executable_runner_new(self.0) }
    }
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_executable_runner_safe_down_cast(
                sself: *mut core::ffi::c_void,
                o: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_executable_runner_safe_down_cast(self.0, o) }
    }
    fn new_instance(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_executable_runner_new_instance(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_executable_runner_new_instance(self.0) }
    }
    fn execute(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_executable_runner_execute(sself: *mut core::ffi::c_void);
        }
        unsafe { vtk_executable_runner_execute(self.0) }
    }
    fn set_timeout(&mut self, _arg: core::ffi::c_double) -> () {
        unsafe extern "C" {
            fn vtk_executable_runner_set_timeout(
                sself: *mut core::ffi::c_void,
                _arg: core::ffi::c_double,
            );
        }
        unsafe { vtk_executable_runner_set_timeout(self.0, _arg) }
    }
    fn get_timeout(&mut self) -> core::ffi::c_double {
        unsafe extern "C" {
            fn vtk_executable_runner_get_timeout(
                sself: *mut core::ffi::c_void,
            ) -> core::ffi::c_double;
        }
        unsafe { vtk_executable_runner_get_timeout(self.0) }
    }
    fn set_right_trim_result(&mut self, _arg: bool) -> () {
        unsafe extern "C" {
            fn vtk_executable_runner_set_right_trim_result(
                sself: *mut core::ffi::c_void,
                _arg: bool,
            );
        }
        unsafe { vtk_executable_runner_set_right_trim_result(self.0, _arg) }
    }
    fn get_right_trim_result(&mut self) -> bool {
        unsafe extern "C" {
            fn vtk_executable_runner_get_right_trim_result(
                sself: *mut core::ffi::c_void,
            ) -> bool;
        }
        unsafe { vtk_executable_runner_get_right_trim_result(self.0) }
    }
    fn right_trim_result_on(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_executable_runner_right_trim_result_on(sself: *mut core::ffi::c_void);
        }
        unsafe { vtk_executable_runner_right_trim_result_on(self.0) }
    }
    fn right_trim_result_off(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_executable_runner_right_trim_result_off(
                sself: *mut core::ffi::c_void,
            );
        }
        unsafe { vtk_executable_runner_right_trim_result_off(self.0) }
    }
    fn get_command(&mut self) -> *const core::ffi::c_char {
        unsafe extern "C" {
            fn vtk_executable_runner_get_command(
                sself: *mut core::ffi::c_void,
            ) -> *const core::ffi::c_char;
        }
        unsafe { vtk_executable_runner_get_command(self.0) }
    }
    fn set_command(&mut self, arg: core::ffi::c_char) -> () {
        unsafe extern "C" {
            fn vtk_executable_runner_set_command(
                sself: *mut core::ffi::c_void,
                arg: core::ffi::c_char,
            );
        }
        unsafe { vtk_executable_runner_set_command(self.0, arg) }
    }
    fn get_std_out(&mut self) -> *const core::ffi::c_char {
        unsafe extern "C" {
            fn vtk_executable_runner_get_std_out(
                sself: *mut core::ffi::c_void,
            ) -> *const core::ffi::c_char;
        }
        unsafe { vtk_executable_runner_get_std_out(self.0) }
    }
    fn get_std_err(&mut self) -> *const core::ffi::c_char {
        unsafe extern "C" {
            fn vtk_executable_runner_get_std_err(
                sself: *mut core::ffi::c_void,
            ) -> *const core::ffi::c_char;
        }
        unsafe { vtk_executable_runner_get_std_err(self.0) }
    }
    fn get_return_value(&mut self) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_executable_runner_get_return_value(
                sself: *mut core::ffi::c_void,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_executable_runner_get_return_value(self.0) }
    }
}
impl VtkServerSocket for vtkServerSocket {
    fn new(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_server_socket_new(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_server_socket_new(self.0) }
    }
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_server_socket_safe_down_cast(
                sself: *mut core::ffi::c_void,
                o: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_server_socket_safe_down_cast(self.0, o) }
    }
    fn new_instance(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_server_socket_new_instance(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_server_socket_new_instance(self.0) }
    }
    fn create_server(&mut self, port: core::ffi::c_int) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_server_socket_create_server(
                sself: *mut core::ffi::c_void,
                port: core::ffi::c_int,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_server_socket_create_server(self.0, port) }
    }
    fn wait_for_connection(
        &mut self,
        msec: core::ffi::c_ulong,
    ) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_server_socket_wait_for_connection(
                sself: *mut core::ffi::c_void,
                msec: core::ffi::c_ulong,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_server_socket_wait_for_connection(self.0, msec) }
    }
    fn get_server_port(&mut self) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_server_socket_get_server_port(
                sself: *mut core::ffi::c_void,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_server_socket_get_server_port(self.0) }
    }
}
impl VtkSocketCollection for vtkSocketCollection {
    fn new(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_socket_collection_new(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_socket_collection_new(self.0) }
    }
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_socket_collection_safe_down_cast(
                sself: *mut core::ffi::c_void,
                o: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_socket_collection_safe_down_cast(self.0, o) }
    }
    fn new_instance(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_socket_collection_new_instance(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_socket_collection_new_instance(self.0) }
    }
    fn add_item(&mut self, soc: *mut core::ffi::c_void) -> () {
        unsafe extern "C" {
            fn vtk_socket_collection_add_item(
                sself: *mut core::ffi::c_void,
                soc: *mut core::ffi::c_void,
            );
        }
        unsafe { vtk_socket_collection_add_item(self.0, soc) }
    }
    fn select_sockets(&mut self, msec: core::ffi::c_ulong) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_socket_collection_select_sockets(
                sself: *mut core::ffi::c_void,
                msec: core::ffi::c_ulong,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_socket_collection_select_sockets(self.0, msec) }
    }
    fn get_last_selected_socket(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_socket_collection_get_last_selected_socket(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_socket_collection_get_last_selected_socket(self.0) }
    }
    fn replace_item(&mut self, i: core::ffi::c_int, p1: *mut core::ffi::c_void) -> () {
        unsafe extern "C" {
            fn vtk_socket_collection_replace_item(
                sself: *mut core::ffi::c_void,
                i: core::ffi::c_int,
                p1: *mut core::ffi::c_void,
            );
        }
        unsafe { vtk_socket_collection_replace_item(self.0, i, p1) }
    }
}
impl VtkThreadMessager for vtkThreadMessager {
    fn new(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_thread_messager_new(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_thread_messager_new(self.0) }
    }
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_thread_messager_safe_down_cast(
                sself: *mut core::ffi::c_void,
                o: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_thread_messager_safe_down_cast(self.0, o) }
    }
    fn new_instance(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_thread_messager_new_instance(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_thread_messager_new_instance(self.0) }
    }
    fn wait_for_message(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_thread_messager_wait_for_message(sself: *mut core::ffi::c_void);
        }
        unsafe { vtk_thread_messager_wait_for_message(self.0) }
    }
    fn send_wake_message(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_thread_messager_send_wake_message(sself: *mut core::ffi::c_void);
        }
        unsafe { vtk_thread_messager_send_wake_message(self.0) }
    }
    fn enable_wait_for_receiver(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_thread_messager_enable_wait_for_receiver(
                sself: *mut core::ffi::c_void,
            );
        }
        unsafe { vtk_thread_messager_enable_wait_for_receiver(self.0) }
    }
    fn disable_wait_for_receiver(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_thread_messager_disable_wait_for_receiver(
                sself: *mut core::ffi::c_void,
            );
        }
        unsafe { vtk_thread_messager_disable_wait_for_receiver(self.0) }
    }
    fn wait_for_receiver(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_thread_messager_wait_for_receiver(sself: *mut core::ffi::c_void);
        }
        unsafe { vtk_thread_messager_wait_for_receiver(self.0) }
    }
}
impl VtkTimerLog for vtkTimerLog {
    fn new(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_timer_log_new(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_timer_log_new(self.0) }
    }
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_timer_log_safe_down_cast(
                sself: *mut core::ffi::c_void,
                o: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_timer_log_safe_down_cast(self.0, o) }
    }
    fn new_instance(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_timer_log_new_instance(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_timer_log_new_instance(self.0) }
    }
    fn set_logging(&mut self, v: core::ffi::c_int) -> () {
        unsafe extern "C" {
            fn vtk_timer_log_set_logging(
                sself: *mut core::ffi::c_void,
                v: core::ffi::c_int,
            );
        }
        unsafe { vtk_timer_log_set_logging(self.0, v) }
    }
    fn get_logging(&mut self) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_timer_log_get_logging(
                sself: *mut core::ffi::c_void,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_timer_log_get_logging(self.0) }
    }
    fn logging_on(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_timer_log_logging_on(sself: *mut core::ffi::c_void);
        }
        unsafe { vtk_timer_log_logging_on(self.0) }
    }
    fn logging_off(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_timer_log_logging_off(sself: *mut core::ffi::c_void);
        }
        unsafe { vtk_timer_log_logging_off(self.0) }
    }
    fn set_max_entries(&mut self, a: core::ffi::c_int) -> () {
        unsafe extern "C" {
            fn vtk_timer_log_set_max_entries(
                sself: *mut core::ffi::c_void,
                a: core::ffi::c_int,
            );
        }
        unsafe { vtk_timer_log_set_max_entries(self.0, a) }
    }
    fn get_max_entries(&mut self) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_timer_log_get_max_entries(
                sself: *mut core::ffi::c_void,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_timer_log_get_max_entries(self.0) }
    }
    fn dump_log(&mut self, filename: core::ffi::c_char) -> () {
        unsafe extern "C" {
            fn vtk_timer_log_dump_log(
                sself: *mut core::ffi::c_void,
                filename: core::ffi::c_char,
            );
        }
        unsafe { vtk_timer_log_dump_log(self.0, filename) }
    }
    fn mark_start_event(&mut self, EventString: core::ffi::c_char) -> () {
        unsafe extern "C" {
            fn vtk_timer_log_mark_start_event(
                sself: *mut core::ffi::c_void,
                EventString: core::ffi::c_char,
            );
        }
        unsafe { vtk_timer_log_mark_start_event(self.0, EventString) }
    }
    fn mark_end_event(&mut self, EventString: core::ffi::c_char) -> () {
        unsafe extern "C" {
            fn vtk_timer_log_mark_end_event(
                sself: *mut core::ffi::c_void,
                EventString: core::ffi::c_char,
            );
        }
        unsafe { vtk_timer_log_mark_end_event(self.0, EventString) }
    }
    fn insert_timed_event(
        &mut self,
        EventString: core::ffi::c_char,
        time: core::ffi::c_double,
        cpuTicks: core::ffi::c_int,
    ) -> () {
        unsafe extern "C" {
            fn vtk_timer_log_insert_timed_event(
                sself: *mut core::ffi::c_void,
                EventString: core::ffi::c_char,
                time: core::ffi::c_double,
                cpuTicks: core::ffi::c_int,
            );
        }
        unsafe { vtk_timer_log_insert_timed_event(self.0, EventString, time, cpuTicks) }
    }
    fn get_number_of_events(&mut self) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_timer_log_get_number_of_events(
                sself: *mut core::ffi::c_void,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_timer_log_get_number_of_events(self.0) }
    }
    fn get_event_indent(&mut self, i: core::ffi::c_int) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_timer_log_get_event_indent(
                sself: *mut core::ffi::c_void,
                i: core::ffi::c_int,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_timer_log_get_event_indent(self.0, i) }
    }
    fn get_event_wall_time(&mut self, i: core::ffi::c_int) -> core::ffi::c_double {
        unsafe extern "C" {
            fn vtk_timer_log_get_event_wall_time(
                sself: *mut core::ffi::c_void,
                i: core::ffi::c_int,
            ) -> core::ffi::c_double;
        }
        unsafe { vtk_timer_log_get_event_wall_time(self.0, i) }
    }
    fn get_event_string(&mut self, i: core::ffi::c_int) -> *const core::ffi::c_char {
        unsafe extern "C" {
            fn vtk_timer_log_get_event_string(
                sself: *mut core::ffi::c_void,
                i: core::ffi::c_int,
            ) -> *const core::ffi::c_char;
        }
        unsafe { vtk_timer_log_get_event_string(self.0, i) }
    }
    fn get_event_type(&mut self, i: core::ffi::c_int) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_timer_log_get_event_type(
                sself: *mut core::ffi::c_void,
                i: core::ffi::c_int,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_timer_log_get_event_type(self.0, i) }
    }
    fn mark_event(&mut self, EventString: core::ffi::c_char) -> () {
        unsafe extern "C" {
            fn vtk_timer_log_mark_event(
                sself: *mut core::ffi::c_void,
                EventString: core::ffi::c_char,
            );
        }
        unsafe { vtk_timer_log_mark_event(self.0, EventString) }
    }
    fn reset_log(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_timer_log_reset_log(sself: *mut core::ffi::c_void);
        }
        unsafe { vtk_timer_log_reset_log(self.0) }
    }
    fn cleanup_log(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_timer_log_cleanup_log(sself: *mut core::ffi::c_void);
        }
        unsafe { vtk_timer_log_cleanup_log(self.0) }
    }
    fn get_universal_time(&mut self) -> core::ffi::c_double {
        unsafe extern "C" {
            fn vtk_timer_log_get_universal_time(
                sself: *mut core::ffi::c_void,
            ) -> core::ffi::c_double;
        }
        unsafe { vtk_timer_log_get_universal_time(self.0) }
    }
    fn get_cpu_time(&mut self) -> core::ffi::c_double {
        unsafe extern "C" {
            fn vtk_timer_log_get_cpu_time(
                sself: *mut core::ffi::c_void,
            ) -> core::ffi::c_double;
        }
        unsafe { vtk_timer_log_get_cpu_time(self.0) }
    }
    fn start_timer(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_timer_log_start_timer(sself: *mut core::ffi::c_void);
        }
        unsafe { vtk_timer_log_start_timer(self.0) }
    }
    fn stop_timer(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_timer_log_stop_timer(sself: *mut core::ffi::c_void);
        }
        unsafe { vtk_timer_log_stop_timer(self.0) }
    }
    fn get_elapsed_time(&mut self) -> core::ffi::c_double {
        unsafe extern "C" {
            fn vtk_timer_log_get_elapsed_time(
                sself: *mut core::ffi::c_void,
            ) -> core::ffi::c_double;
        }
        unsafe { vtk_timer_log_get_elapsed_time(self.0) }
    }
}
/// Encapsulates a client socket.
///
#[allow(non_camel_case_types)]
pub struct vtkClientSocket(*mut core::ffi::c_void);
impl vtkClientSocket {
    /// Creates a new [vtkClientSocket] wrapped inside `vtkNew`
    #[doc(alias = "vtkClientSocket")]
    pub fn new() -> Self {
        unsafe extern "C" {
            fn vtkClientSocket_new() -> *mut core::ffi::c_void;
        }
        Self(unsafe { &mut *vtkClientSocket_new() })
    }
    #[cfg(test)]
    unsafe fn _get_ptr(&self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtkClientSocket_get_ptr(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtkClientSocket_get_ptr(self.0) }
    }
}
impl std::default::Default for vtkClientSocket {
    fn default() -> Self {
        Self::new()
    }
}
impl Drop for vtkClientSocket {
    fn drop(&mut self) {
        unsafe extern "C" {
            fn vtkClientSocket_destructor(sself: *mut core::ffi::c_void);
        }
        unsafe { vtkClientSocket_destructor(self.0) }
        self.0 = core::ptr::null_mut();
    }
}
#[test]
fn test_vtkClientSocket_create_drop() {
    let obj = vtkClientSocket::new();
    let ptr = obj.0;
    assert!(!ptr.is_null());
    assert!(unsafe { !obj._get_ptr().is_null() });
    drop(obj);
    let new_obj = vtkClientSocket(ptr);
    assert!(unsafe { new_obj._get_ptr().is_null() });
}
/// OS independent class for access and manipulation of system directories
///
///
/// vtkDirectory provides a portable way of finding the names of the files
/// in a system directory.  It also provides methods of manipulating directories.
///
/// @warning
/// vtkDirectory works with windows and unix only.
#[allow(non_camel_case_types)]
pub struct vtkDirectory(*mut core::ffi::c_void);
impl vtkDirectory {
    /// Creates a new [vtkDirectory] wrapped inside `vtkNew`
    #[doc(alias = "vtkDirectory")]
    pub fn new() -> Self {
        unsafe extern "C" {
            fn vtkDirectory_new() -> *mut core::ffi::c_void;
        }
        Self(unsafe { &mut *vtkDirectory_new() })
    }
    #[cfg(test)]
    unsafe fn _get_ptr(&self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtkDirectory_get_ptr(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtkDirectory_get_ptr(self.0) }
    }
}
impl std::default::Default for vtkDirectory {
    fn default() -> Self {
        Self::new()
    }
}
impl Drop for vtkDirectory {
    fn drop(&mut self) {
        unsafe extern "C" {
            fn vtkDirectory_destructor(sself: *mut core::ffi::c_void);
        }
        unsafe { vtkDirectory_destructor(self.0) }
        self.0 = core::ptr::null_mut();
    }
}
#[test]
fn test_vtkDirectory_create_drop() {
    let obj = vtkDirectory::new();
    let ptr = obj.0;
    assert!(!ptr.is_null());
    assert!(unsafe { !obj._get_ptr().is_null() });
    drop(obj);
    let new_obj = vtkDirectory(ptr);
    assert!(unsafe { new_obj._get_ptr().is_null() });
}
/// Launch a process on the current machine and get its output
///
///
/// Launch a process on the current machine and get its standard output and
/// standard error output.
#[allow(non_camel_case_types)]
pub struct vtkExecutableRunner(*mut core::ffi::c_void);
impl vtkExecutableRunner {
    /// Creates a new [vtkExecutableRunner] wrapped inside `vtkNew`
    #[doc(alias = "vtkExecutableRunner")]
    pub fn new() -> Self {
        unsafe extern "C" {
            fn vtkExecutableRunner_new() -> *mut core::ffi::c_void;
        }
        Self(unsafe { &mut *vtkExecutableRunner_new() })
    }
    #[cfg(test)]
    unsafe fn _get_ptr(&self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtkExecutableRunner_get_ptr(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtkExecutableRunner_get_ptr(self.0) }
    }
}
impl std::default::Default for vtkExecutableRunner {
    fn default() -> Self {
        Self::new()
    }
}
impl Drop for vtkExecutableRunner {
    fn drop(&mut self) {
        unsafe extern "C" {
            fn vtkExecutableRunner_destructor(sself: *mut core::ffi::c_void);
        }
        unsafe { vtkExecutableRunner_destructor(self.0) }
        self.0 = core::ptr::null_mut();
    }
}
#[test]
fn test_vtkExecutableRunner_create_drop() {
    let obj = vtkExecutableRunner::new();
    let ptr = obj.0;
    assert!(!ptr.is_null());
    assert!(unsafe { !obj._get_ptr().is_null() });
    drop(obj);
    let new_obj = vtkExecutableRunner(ptr);
    assert!(unsafe { new_obj._get_ptr().is_null() });
}
/// Encapsulate a socket that accepts connections.
///
#[allow(non_camel_case_types)]
pub struct vtkServerSocket(*mut core::ffi::c_void);
impl vtkServerSocket {
    /// Creates a new [vtkServerSocket] wrapped inside `vtkNew`
    #[doc(alias = "vtkServerSocket")]
    pub fn new() -> Self {
        unsafe extern "C" {
            fn vtkServerSocket_new() -> *mut core::ffi::c_void;
        }
        Self(unsafe { &mut *vtkServerSocket_new() })
    }
    #[cfg(test)]
    unsafe fn _get_ptr(&self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtkServerSocket_get_ptr(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtkServerSocket_get_ptr(self.0) }
    }
}
impl std::default::Default for vtkServerSocket {
    fn default() -> Self {
        Self::new()
    }
}
impl Drop for vtkServerSocket {
    fn drop(&mut self) {
        unsafe extern "C" {
            fn vtkServerSocket_destructor(sself: *mut core::ffi::c_void);
        }
        unsafe { vtkServerSocket_destructor(self.0) }
        self.0 = core::ptr::null_mut();
    }
}
#[test]
fn test_vtkServerSocket_create_drop() {
    let obj = vtkServerSocket::new();
    let ptr = obj.0;
    assert!(!ptr.is_null());
    assert!(unsafe { !obj._get_ptr().is_null() });
    drop(obj);
    let new_obj = vtkServerSocket(ptr);
    assert!(unsafe { new_obj._get_ptr().is_null() });
}
/// a collection for sockets.
///
///
/// Apart from being vtkCollection subclass for sockets, this class
/// provides means to wait for activity on all the sockets in the
/// collection simultaneously.
#[allow(non_camel_case_types)]
pub struct vtkSocketCollection(*mut core::ffi::c_void);
impl vtkSocketCollection {
    /// Creates a new [vtkSocketCollection] wrapped inside `vtkNew`
    #[doc(alias = "vtkSocketCollection")]
    pub fn new() -> Self {
        unsafe extern "C" {
            fn vtkSocketCollection_new() -> *mut core::ffi::c_void;
        }
        Self(unsafe { &mut *vtkSocketCollection_new() })
    }
    #[cfg(test)]
    unsafe fn _get_ptr(&self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtkSocketCollection_get_ptr(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtkSocketCollection_get_ptr(self.0) }
    }
}
impl std::default::Default for vtkSocketCollection {
    fn default() -> Self {
        Self::new()
    }
}
impl Drop for vtkSocketCollection {
    fn drop(&mut self) {
        unsafe extern "C" {
            fn vtkSocketCollection_destructor(sself: *mut core::ffi::c_void);
        }
        unsafe { vtkSocketCollection_destructor(self.0) }
        self.0 = core::ptr::null_mut();
    }
}
#[test]
fn test_vtkSocketCollection_create_drop() {
    let obj = vtkSocketCollection::new();
    let ptr = obj.0;
    assert!(!ptr.is_null());
    assert!(unsafe { !obj._get_ptr().is_null() });
    drop(obj);
    let new_obj = vtkSocketCollection(ptr);
    assert!(unsafe { new_obj._get_ptr().is_null() });
}
/// A class for performing inter-thread messaging
///
///
/// vtkThreadMessager is a class that provides support for messaging between
/// threads multithreaded using pthreads or Windows messaging.
#[allow(non_camel_case_types)]
pub struct vtkThreadMessager(*mut core::ffi::c_void);
impl vtkThreadMessager {
    /// Creates a new [vtkThreadMessager] wrapped inside `vtkNew`
    #[doc(alias = "vtkThreadMessager")]
    pub fn new() -> Self {
        unsafe extern "C" {
            fn vtkThreadMessager_new() -> *mut core::ffi::c_void;
        }
        Self(unsafe { &mut *vtkThreadMessager_new() })
    }
    #[cfg(test)]
    unsafe fn _get_ptr(&self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtkThreadMessager_get_ptr(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtkThreadMessager_get_ptr(self.0) }
    }
}
impl std::default::Default for vtkThreadMessager {
    fn default() -> Self {
        Self::new()
    }
}
impl Drop for vtkThreadMessager {
    fn drop(&mut self) {
        unsafe extern "C" {
            fn vtkThreadMessager_destructor(sself: *mut core::ffi::c_void);
        }
        unsafe { vtkThreadMessager_destructor(self.0) }
        self.0 = core::ptr::null_mut();
    }
}
#[test]
fn test_vtkThreadMessager_create_drop() {
    let obj = vtkThreadMessager::new();
    let ptr = obj.0;
    assert!(!ptr.is_null());
    assert!(unsafe { !obj._get_ptr().is_null() });
    drop(obj);
    let new_obj = vtkThreadMessager(ptr);
    assert!(unsafe { new_obj._get_ptr().is_null() });
}
/// Timer support and logging
///
///
/// vtkTimerLog contains walltime and cputime measurements associated
/// with a given event.  These results can be later analyzed when
/// "dumping out" the table.
///
/// In addition, vtkTimerLog allows the user to simply get the current
/// time, and to start/stop a simple timer separate from the timing
/// table logging.
#[allow(non_camel_case_types)]
pub struct vtkTimerLog(*mut core::ffi::c_void);
impl vtkTimerLog {
    /// Creates a new [vtkTimerLog] wrapped inside `vtkNew`
    #[doc(alias = "vtkTimerLog")]
    pub fn new() -> Self {
        unsafe extern "C" {
            fn vtkTimerLog_new() -> *mut core::ffi::c_void;
        }
        Self(unsafe { &mut *vtkTimerLog_new() })
    }
    #[cfg(test)]
    unsafe fn _get_ptr(&self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtkTimerLog_get_ptr(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtkTimerLog_get_ptr(self.0) }
    }
}
impl std::default::Default for vtkTimerLog {
    fn default() -> Self {
        Self::new()
    }
}
impl Drop for vtkTimerLog {
    fn drop(&mut self) {
        unsafe extern "C" {
            fn vtkTimerLog_destructor(sself: *mut core::ffi::c_void);
        }
        unsafe { vtkTimerLog_destructor(self.0) }
        self.0 = core::ptr::null_mut();
    }
}
#[test]
fn test_vtkTimerLog_create_drop() {
    let obj = vtkTimerLog::new();
    let ptr = obj.0;
    assert!(!ptr.is_null());
    assert!(unsafe { !obj._get_ptr().is_null() });
    drop(obj);
    let new_obj = vtkTimerLog(ptr);
    assert!(unsafe { new_obj._get_ptr().is_null() });
}
