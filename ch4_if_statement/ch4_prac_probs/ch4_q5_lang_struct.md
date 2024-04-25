Generally, any changes made to the codes would require the re-compilation of the codes in C++. However, for some different language systme but C++, may have such feasibility, such as scripting language, for example, Python, Matlab etc.

On the other hand, if considering the reasonability and efficiency of the codes for the password system, we could indicate the class to encapsulate the password system. The user and password could be formed in a pair (#inlcude <algorithm>, std::pair<std::string, std::string> user_pwd from STL, and then form a vector, to loop searching, but n^2 complexity). 

Surely, the enum class could be used for including the input users and pwds, and then use case-switch to replace if-else statement;

To allow better searching efficiency, we can indicate hash table to treat the user name as the 'key', and the pwd as the 'value', by including <unorder_map> from STL and then fast seaching in the hash table to identify the matching of the user/pwd pairs. 