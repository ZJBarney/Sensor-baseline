#ifndef header_h
#define header_h

String file1=
"<h1 style=\"color: #5e9ca0;\">This is the HOME page!&nbsp;</h1>\r\n"
"<p>Go to the&nbsp;<a href=\"lightstatus\" target=\"_self\">Light Status Page</a></p>\r\n"
"<p>Go to the&nbsp;<a href=\"dayz\" target=\"_self\">Day delay timeout page</a></p>\r\n"

"<p><img src=\"https://tuts.codingo.me/wp-content/uploads/2016/05/ESP-12.jpg\" alt=\"Mighty Mighty Chip!\" width=\"308\" height=\"231\" /></p>\r\n";

String file2a=
"<h1><span style=\"color: #000000;\">Light Status Page</span></h1>\r\n";
String file2b=
"<p>Nuber of times lights have been switched:&nbsp;</p>\r\n"
"<table>\r\n"
"<tbody>\r\n"
"<tr>\r\n";
String file2c=
"</tr>\r\n"
"</tbody>\r\n"
"</table>\r\n"
"<p>Go to the&nbsp;<a href=\"dayz\" target=\"_self\">Day Delay Timeout page</a></p>\r\n"
"<p><br /><img src=\"https://tuts.codingo.me/wp-content/uploads/2016/05/ESP-12.jpg\" alt=\"Mighty Mighty Chip!\" width=\"308\" height=\"231\" /></p>\r\n"
"Timeout delay for debug (takes 1 minute to update) is:  ";
String file2d=
"<p>The current time and date are:  </p>\r\n"
"<br><br>";
String file2f=
"</p><form action=\"/day\">"
"Day: "
"  <select name=\"wkDay\">"
"    <option value=\"1\">Sunday</option>"
"    <option value=\"2\">Monday</option>"
"    <option value=\"3\">Tuesday</option>"
"    <option value=\"4\">Wednesday</option>"
"    <option value=\"5\">Thursday</option>"
"    <option value=\"6\">Friday</option>"
"    <option value=\"7\">Saturday</option>"
"    </select>"
"    <input type=\"submit\">"
"    <br><br>"
"    </form>";

String file4=
"<h1>Success: Saved new timeout. Return to status to check lights"
"<p>Go to the <a href=\"lightstatus\" target=\"_self\">Light Status Page</a></p>\r\n";

String file6=
"<h1><span style=\"color: #000000;\">Lighting timer delay page</span></h1>\r\n""<html>"
"<p>"
"<body>"

"</p><form action=\"/setting\">"
"Day: "
"  <select name=\"wkDay\">"
"    <option value=\"1\">Sunday</option>"
"    <option value=\"2\">Monday</option>"
"    <option value=\"3\">Tuesday</option>"
"    <option value=\"4\">Wednesday</option>"
"    <option value=\"5\">Thursday</option>"
"    <option value=\"6\">Friday</option>"
"    <option value=\"7\">Saturday</option>"
"    </select>"
"<br><br>"
"Time: 12 am to 1 am &nbsp;"
"  <select name=\"1\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 1 am to 2 am &nbsp;&nbsp;&nbsp;"
"  <select name=\"2\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 2 am to 3 am &nbsp;&nbsp;&nbsp;"
"  <select name=\"3\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 3 am to 4 am &nbsp;&nbsp;&nbsp;"
"  <select name=\"4\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 4 am to 5 am &nbsp;&nbsp;&nbsp;"
"  <select name=\"5\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 5 am to 6 am &nbsp;&nbsp;&nbsp;"
"  <select name=\"6\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 6 am to 7 am &nbsp;&nbsp;&nbsp;"
"  <select name=\"7\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 7 am to 8 am &nbsp;&nbsp;&nbsp;"
"  <select name=\"8\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 8 am to 9 am &nbsp;&nbsp;&nbsp;"
"  <select name=\"9\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 9 am to 10 am &nbsp;"
"  <select name=\"10\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 10 am to 11 am"
"  <select name=\"11\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 11 am to 12 pm"
"  <select name=\"12\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 12 pm to 1 pm &nbsp;"
"  <select name=\"13\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 1 pm to 2 pm &nbsp;&nbsp;&nbsp;"
"  <select name=\"14\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 2 pm to 3 pm &nbsp;&nbsp;&nbsp;"
"  <select name=\"15\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 3 pm to 4 pm &nbsp;&nbsp;&nbsp;"
"  <select name=\"16\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 4 pm to 5 pm &nbsp;&nbsp;&nbsp;"
"  <select name=\"17\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 5 pm to 6 pm &nbsp;&nbsp;&nbsp;"
"  <select name=\"18\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 6 pm to 7 pm &nbsp;&nbsp;&nbsp;"
"  <select name=\"19\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 7 pm to 8 pm &nbsp;&nbsp;&nbsp;"
"  <select name=\"20\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 8 pm to 9 pm &nbsp;&nbsp;&nbsp;"
"  <select name=\"21\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 9 pm to 10 pm &nbsp;"
"  <select name=\"22\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 10 pm to 11 pm"
"  <select name=\"23\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"Time: 11 pm to 12 am"
"  <select name=\"24\">"
"    <option value=\"5\">5</option>"
"    <option value=\"10\">10</option>"
"    <option value=\"15\">15</option>"
"    <option value=\"20\">20</option>"
"    <option value=\"25\">25</option>"
"    <option value=\"100\">ON</option>"
"    <option value=\"0\">OFF</option>"
"    </select>"
"    <br><br>"
"  <input type=\"submit\">"
"</form>"
"</body>"
"</html>";

#endif
