/*  For part of the file: 
 *  Copyright (c) Microsoft Corporation
 *  https://github.com/MicrosoftDocs/windows-itpro-docs/blob/master/LICENSE
 *  CC 4.0
 *  */

const char *eventDescriptions[] = { 
"1100(S) The event logging service has shut down. (Windows 10)",
"1102(S) The audit log was cleared. (Windows 10)",
"1104(S) The security log is now full. (Windows 10)",
"1105(S) Event log automatic backup. (Windows 10)",
"1108(S) The event logging service encountered an error while processing an incoming event published from . (Windows 10)",
"4608(S) Windows is starting up. (Windows 10)",
"4610(S) An authentication package has been loaded by the Local Security Authority. (Windows 10)",
"4611(S) A trusted logon process has been registered with the Local Security Authority. (Windows 10)",
"4612(S) Internal resources allocated for the queuing of audit messages have been exhausted, leading to the loss of some audits. (Windows 10)",
"4614(S) A notification package has been loaded by the Security Account Manager. (Windows 10)",
"4615(S) Invalid use of LPC port. (Windows 10)",
"4616(S) The system time was changed. (Windows 10)",
"4618(S) A monitored security event pattern has occurred. (Windows 10)",
"4621(S) Administrator recovered system from CrashOnAuditFail. (Windows 10)",
"4622(S) A security package has been loaded by the Local Security Authority. (Windows 10)",
"4624(S) An account was successfully logged on. (Windows 10)",
"4625(F) An account failed to log on. (Windows 10)",
"4626(S) User/Device claims information. (Windows 10)",
"4627(S) Group membership information. (Windows 10)",
"4634(S) An account was logged off. (Windows 10)",
"4647(S) User initiated logoff. (Windows 10)",
"4648(S) A logon was attempted using explicit credentials. (Windows 10)",
"4649(S) A replay attack was detected. (Windows 10)",
"4656(S, F) A handle to an object was requested. (Windows 10)",
"4657(S) A registry value was modified. (Windows 10)",
"4658(S) The handle to an object was closed. (Windows 10)",
"4660(S) An object was deleted. (Windows 10)",
"4661(S, F) A handle to an object was requested. (Windows 10)",
"4662(S, F) An operation was performed on an object. (Windows 10)",
"4663(S) An attempt was made to access an object. (Windows 10)",
"4664(S) An attempt was made to create a hard link. (Windows 10)",
"4670(S) Permissions on an object were changed. (Windows 10)",
"4671(-) An application attempted to access a blocked ordinal through the TBS. (Windows 10)",
"4672(S) Special privileges assigned to new logon. (Windows 10)",
"4673(S, F) A privileged service was called. (Windows 10)",
"4674(S, F) An operation was attempted on a privileged object. (Windows 10)",
"4675(S) SIDs were filtered. (Windows 10)",
"4688(S) A new process has been created. (Windows 10)",
"4689(S) A process has exited. (Windows 10)",
"4690(S) An attempt was made to duplicate a handle to an object. (Windows 10)",
"4691(S) Indirect access to an object was requested. (Windows 10)",
"4692(S, F) Backup of data protection master key was attempted. (Windows 10)",
"4693(S, F) Recovery of data protection master key was attempted. (Windows 10)",
"4694(S, F) Protection of auditable protected data was attempted. (Windows 10)",
"4695(S, F) Unprotection of auditable protected data was attempted. (Windows 10)",
"4696(S) A primary token was assigned to process. (Windows 10)",
"4697(S) A service was installed in the system. (Windows 10)",
"4698(S) A scheduled task was created. (Windows 10)",
"4699(S) A scheduled task was deleted. (Windows 10)",
"4700(S) A scheduled task was enabled. (Windows 10)",
"4701(S) A scheduled task was disabled. (Windows 10)",
"4702(S) A scheduled task was updated. (Windows 10)",
"4703(S) A user right was adjusted. (Windows 10)",
"4704(S) A user right was assigned. (Windows 10)",
"4705(S) A user right was removed. (Windows 10)",
"4706(S) A new trust was created to a domain. (Windows 10)",
"4707(S) A trust to a domain was removed. (Windows 10)",
"4713(S) Kerberos policy was changed. (Windows 10)",
"4714(S) Encrypted data recovery policy was changed. (Windows 10)",
"4715(S) The audit policy (SACL) on an object was changed. (Windows 10)",
"4716(S) Trusted domain information was modified. (Windows 10)",
"4717(S) System security access was granted to an account. (Windows 10)",
"4718(S) System security access was removed from an account. (Windows 10)",
"4719(S) System audit policy was changed. (Windows 10)",
"4720(S) A user account was created. (Windows 10)",
"4722(S) A user account was enabled. (Windows 10)",
"4723(S, F) An attempt was made to change an account's password. (Windows 10)",
"4724(S, F) An attempt was made to reset an account's password. (Windows 10)",
"4725(S) A user account was disabled. (Windows 10)",
"4726(S) A user account was deleted. (Windows 10)",
"4731(S) A security-enabled local group was created. (Windows 10)",
"4732(S) A member was added to a security-enabled local group. (Windows 10)",
"4733(S) A member was removed from a security-enabled local group. (Windows 10)",
"4734(S) A security-enabled local group was deleted. (Windows 10)",
"4735(S) A security-enabled local group was changed. (Windows 10)",
"4738(S) A user account was changed. (Windows 10)",
"4739(S) Domain Policy was changed. (Windows 10)",
"4740(S) A user account was locked out. (Windows 10)",
"4741(S) A computer account was created. (Windows 10)",
"4742(S) A computer account was changed. (Windows 10)",
"4743(S) A computer account was deleted. (Windows 10)",
"4749(S) A security-disabled global group was created. (Windows 10)",
"4750(S) A security-disabled global group was changed. (Windows 10)",
"4751(S) A member was added to a security-disabled global group. (Windows 10)",
"4752(S) A member was removed from a security-disabled global group. (Windows 10)",
"4753(S) A security-disabled global group was deleted. (Windows 10)",
"4764(S) A group's type was changed. (Windows 10)",
"4765(S) SID History was added to an account. (Windows 10)",
"4766(F) An attempt to add SID History to an account failed. (Windows 10)",
"4767(S) A user account was unlocked. (Windows 10)",
"4768(S, F) A Kerberos authentication ticket (TGT) was requested. (Windows 10)",
"4769(S, F) A Kerberos service ticket was requested. (Windows 10)",
"4770(S) A Kerberos service ticket was renewed. (Windows 10)",
"4771(F) Kerberos pre-authentication failed. (Windows 10)",
"4772(F) A Kerberos authentication ticket request failed. (Windows 10)",
"4773(F) A Kerberos service ticket request failed. (Windows 10)",
"4774(S, F) An account was mapped for logon. (Windows 10)",
"4775(F) An account could not be mapped for logon. (Windows 10)",
"4776(S, F) The computer attempted to validate the credentials for an account. (Windows 10)",
"4777(F) The domain controller failed to validate the credentials for an account. (Windows 10)",
"4778(S) A session was reconnected to a Window Station. (Windows 10)",
"4779(S) A session was disconnected from a Window Station. (Windows 10)",
"4780(S) The ACL was set on accounts which are members of administrators groups. (Windows 10)",
"4781(S) The name of an account was changed. (Windows 10)",
"4782(S) The password hash an account was accessed. (Windows 10)",
"4793(S) The Password Policy Checking API was called. (Windows 10)",
"4794(S, F) An attempt was made to set the Directory Services Restore Mode administrator password. (Windows 10)",
"4798(S) A user's local group membership was enumerated. (Windows 10)",
"4799(S) A security-enabled local group membership was enumerated. (Windows 10)",
"4800(S) The workstation was locked. (Windows 10)",
"4801(S) The workstation was unlocked. (Windows 10)",
"4802(S) The screen saver was invoked. (Windows 10)",
"4803(S) The screen saver was dismissed. (Windows 10)",
"4816(S) RPC detected an integrity violation while decrypting an incoming message. (Windows 10)",
"4817(S) Auditing settings on object were changed. (Windows 10)",
"4818(S) Proposed Central Access Policy does not grant the same access permissions as the current Central Access Policy. (Windows 10)",
"4819(S) Central Access Policies on the machine have been changed. (Windows 10)",
"4826(S) Boot Configuration Data loaded. (Windows 10)",
"4864(S) A namespace collision was detected. (Windows 10)",
"4865(S) A trusted forest information entry was added. (Windows 10)",
"4866(S) A trusted forest information entry was removed. (Windows 10)",
"4867(S) A trusted forest information entry was modified. (Windows 10)",
"4902(S) The Per-user audit policy table was created. (Windows 10)",
"4904(S) An attempt was made to register a security event source. (Windows 10)",
"4905(S) An attempt was made to unregister a security event source. (Windows 10)",
"4906(S) The CrashOnAuditFail value has changed. (Windows 10)",
"4907(S) Auditing settings on object were changed. (Windows 10)",
"4908(S) Special Groups Logon table modified. (Windows 10)",
"4909(-) The local policy settings for the TBS were changed. (Windows 10)",
"4910(-) The group policy settings for the TBS were changed. (Windows 10)",
"4911(S) Resource attributes of the object were changed. (Windows 10)",
"4912(S) Per User Audit Policy was changed. (Windows 10)",
"4913(S) Central Access Policy on the object was changed. (Windows 10)",
"4928(S, F) An Active Directory replica source naming context was established. (Windows 10)",
"4929(S, F) An Active Directory replica source naming context was removed. (Windows 10)",
"4930(S, F) An Active Directory replica source naming context was modified. (Windows 10)",
"4931(S, F) An Active Directory replica destination naming context was modified. (Windows 10)",
"4932(S) Synchronization of a replica of an Active Directory naming context has begun. (Windows 10)",
"4933(S, F) Synchronization of a replica of an Active Directory naming context has ended. (Windows 10)",
"4934(S) Attributes of an Active Directory object were replicated. (Windows 10)",
"4935(F) Replication failure begins. (Windows 10)",
"4936(S) Replication failure ends. (Windows 10)",
"4937(S) A lingering object was removed from a replica. (Windows 10)",
"4944(S) The following policy was active when the Windows Firewall started. (Windows 10)",
"4945(S) A rule was listed when the Windows Firewall started. (Windows 10)",
"4946(S) A change has been made to Windows Firewall exception list. A rule was added. (Windows 10)",
"4947(S) A change has been made to Windows Firewall exception list. A rule was modified. (Windows 10)",
"4948(S) A change has been made to Windows Firewall exception list. A rule was deleted. (Windows 10)",
"4949(S) Windows Firewall settings were restored to the default values. (Windows 10)",
"4950(S) A Windows Firewall setting has changed. (Windows 10)",
"4951(F) A rule has been ignored because its major version number was not recognized by Windows Firewall. (Windows 10)",
"4952(F) Parts of a rule have been ignored because its minor version number was not recognized by Windows Firewall. The other parts of the rule will be enforced. (Windows 10)",
"4953(F) Windows Firewall ignored a rule because it could not be parsed. (Windows 10)",
"4954(S) Windows Firewall Group Policy settings have changed. The new settings have been applied. (Windows 10)",
"4956(S) Windows Firewall has changed the active profile. (Windows 10)",
"4957(F) Windows Firewall did not apply the following rule. (Windows 10)",
"4958(F) Windows Firewall did not apply the following rule because the rule referred to items not configured on this computer. (Windows 10)",
"4964(S) Special groups have been assigned to a new logon. (Windows 10)",
"4985(S) The state of a transaction has changed. (Windows 10)",
"5024(S) The Windows Firewall Service has started successfully. (Windows 10)",
"5025(S) The Windows Firewall Service has been stopped. (Windows 10)",
"5027(F) The Windows Firewall Service was unable to retrieve the security policy from the local storage. The service will continue enforcing the current policy. (Windows 10)",
"5028(F) The Windows Firewall Service was unable to parse the new security policy. The service will continue with currently enforced policy. (Windows 10)",
"5029(F) The Windows Firewall Service failed to initialize the driver. The service will continue to enforce the current policy. (Windows 10)",
"5030(F) The Windows Firewall Service failed to start. (Windows 10)",
"5031(F) The Windows Firewall Service blocked an application from accepting incoming connections on the network. (Windows 10)",
"5032(F) Windows Firewall was unable to notify the user that it blocked an application from accepting incoming connections on the network. (Windows 10)",
"5033(S) The Windows Firewall Driver has started successfully. (Windows 10)",
"5034(S) The Windows Firewall Driver was stopped. (Windows 10)",
"5035(F) The Windows Firewall Driver failed to start. (Windows 10)",
"5037(F) The Windows Firewall Driver detected critical runtime error. Terminating. (Windows 10)",
"5038(F) Code integrity determined that the image hash of a file is not valid. (Windows 10)",
"5039(-) A registry key was virtualized. (Windows 10)",
"5051(-) A file was virtualized. (Windows 10)",
"5056(S) A cryptographic self-test was performed. (Windows 10)",
"5057(F) A cryptographic primitive operation failed. (Windows 10)",
"5058(S, F) Key file operation. (Windows 10)",
"5059(S, F) Key migration operation. (Windows 10)",
"5060(F) Verification operation failed. (Windows 10)",
"5061(S, F) Cryptographic operation. (Windows 10)",
"5062(S) A kernel-mode cryptographic self-test was performed. (Windows 10)",
"5063(S, F) A cryptographic provider operation was attempted. (Windows 10)",
"5064(S, F) A cryptographic context operation was attempted. (Windows 10)",
"5065(S, F) A cryptographic context modification was attempted. (Windows 10)",
"5066(S, F) A cryptographic function operation was attempted. (Windows 10)",
"5067(S, F) A cryptographic function modification was attempted. (Windows 10)",
"5068(S, F) A cryptographic function provider operation was attempted. (Windows 10)",
"5069(S, F) A cryptographic function property operation was attempted. (Windows 10)",
"5070(S, F) A cryptographic function property modification was attempted. (Windows 10)",
"5136(S) A directory service object was modified. (Windows 10)",
"5137(S) A directory service object was created. (Windows 10)",
"5138(S) A directory service object was undeleted. (Windows 10)",
"5139(S) A directory service object was moved. (Windows 10)",
"5140(S, F) A network share object was accessed. (Windows 10)",
"5141(S) A directory service object was deleted. (Windows 10)",
"5142(S) A network share object was added. (Windows 10)",
"5143(S) A network share object was modified. (Windows 10)",
"5144(S) A network share object was deleted. (Windows 10)",
"5145(S, F) A network share object was checked to see whether client can be granted desired access. (Windows 10)",
"5148(F) The Windows Filtering Platform has detected a DoS attack and entered a defensive mode; packets associated with this attack will be discarded. (Windows 10)",
"5149(F) The DoS attack has subsided and normal processing is being resumed. (Windows 10)",
"5150(-) The Windows Filtering Platform blocked a packet. (Windows 10)",
"5151(-) A more restrictive Windows Filtering Platform filter has blocked a packet. (Windows 10)",
"5152(F) The Windows Filtering Platform blocked a packet. (Windows 10)",
"5153(S) A more restrictive Windows Filtering Platform filter has blocked a packet. (Windows 10)",
"5154(S) The Windows Filtering Platform has permitted an application or service to listen on a port for incoming connections. (Windows 10)",
"5155(F) The Windows Filtering Platform has blocked an application or service from listening on a port for incoming connections. (Windows 10)",
"5156(S) The Windows Filtering Platform has permitted a connection. (Windows 10)",
"5157(F) The Windows Filtering Platform has blocked a connection. (Windows 10)",
"5158(S) The Windows Filtering Platform has permitted a bind to a local port. (Windows 10)",
"5159(F) The Windows Filtering Platform has blocked a bind to a local port. (Windows 10)",
"5168(F) SPN check for SMB/SMB2 failed. (Windows 10)",
"5376(S) Credential Manager credentials were backed up. (Windows 10)",
"5377(S) Credential Manager credentials were restored from a backup. (Windows 10)",
"5378(F) The requested credentials delegation was disallowed by policy. (Windows 10)",
"5447(S) A Windows Filtering Platform filter has been changed. (Windows 10)",
"5632(S, F) A request was made to authenticate to a wireless network. (Windows 10)",
"5633(S, F) A request was made to authenticate to a wired network. (Windows 10)",
"5712(S) A Remote Procedure Call (RPC) was attempted. (Windows 10)",
"5888(S) An object in the COM+ Catalog was modified. (Windows 10)",
"5889(S) An object was deleted from the COM+ Catalog. (Windows 10)",
"5890(S) An object was added to the COM+ Catalog. (Windows 10)",
"6144(S) Security policy in the group policy objects has been applied successfully. (Windows 10)",
"6145(F) One or more errors occurred while processing security policy in the group policy objects. (Windows 10)",
"6281(F) Code Integrity determined that the page hashes of an image file are not valid. (Windows 10)",
"6400(-) BranchCache Received an incorrectly formatted response while discovering availability of content. (Windows 10)",
"6401(-) BranchCache Received invalid data from a peer. Data discarded. (Windows 10)",
"6402(-) BranchCache The message to the hosted cache offering it data is incorrectly formatted. (Windows 10)",
"6403(-) BranchCache The hosted cache sent an incorrectly formatted response to the client. (Windows 10)",
"6404(-) BranchCache Hosted cache could not be authenticated using the provisioned SSL certificate. (Windows 10)",
"6405(-) BranchCache %2 instance(s) of event id %1 occurred. (Windows 10)",
"6406(-) %1 registered to Windows Firewall to control filtering for the following %2. (Windows 10)",
"6407(-) 1%. (Windows 10)",
"6408(-) Registered product %1 failed and Windows Firewall is now controlling the filtering for %2. (Windows 10)",
"6409(-) BranchCache A service connection point object could not be parsed. (Windows 10)",
"6410(F) Code integrity determined that a file does not meet the security requirements to load into a process. (Windows 10)",
"6416(S) A new external device was recognized by the System. (Windows 10)",
"6419(S) A request was made to disable a device. (Windows 10)",
"6420(S) A device was disabled. (Windows 10)",
"6421(S) A request was made to enable a device. (Windows 10)",
"6422(S) A device was enabled. (Windows 10)",
"6423(S) The installation of this device is forbidden by system policy. (Windows 10)",
"6424(S) The installation of this device was allowed, after having previously been forbidden by policy. (Windows 10)",
"7009(S) Timeout waiting for the service to connect.",
"7036(S) The service entered the new state.",
"7045(S) A service was installed in the system.",
"10009(S) DCOM was unable to communicate with the computer using any of the configured protocols.",
"1204(S) Drive array accelerator status change.",
"4227(S) TCP/IP failed to establish an outgoing connection because the selected local endpoint was recently used to connect to the same remote endpoint.",
"1111(S) Driver required for printer is unknown. Contact the administrator to install the driver before you log in again.",
"7001(S) The service depends on the service which failed to start because of the following error:",
"1503(S) The Group Policy settings for the user were processed successfully. New settings from %6 Group Policy objects were detected and applied.",
"5807(S) During the past hours there have been connections to this Domain Controller from client machines whose IP addresses don’t map to any of the existing sites in the enterprise.",
};

