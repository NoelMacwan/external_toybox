#define OPTSTR_acpi	"abctV"
#define OPTSTR_arp	"vi:nDsdap:A:H:[+Ap][!sd]"
#define OPTSTR_arping	"<1>1s:I:w#<0c#<0AUDbqf[+AU][+Df]"
#define OPTSTR_basename	"<1>2"
#define OPTSTR_blkid	"<1"
#define OPTSTR_blockdev	"<1>1(setro)(setrw)(getro)(getss)(getbsz)(setbsz)#<0(getsz)(getsize)(getsize64)(flushbufs)(rereadpt)"
#define OPTSTR_brctl	"<1"
#define OPTSTR_cal	">2"
#define OPTSTR_cat	"u"
#define OPTSTR_catv	"vte"
#define OPTSTR_chgrp	"<2hPLHRfv"
#define OPTSTR_chmod	"<2?vRf[-vf]"
#define OPTSTR_chroot	"^<1"
#define OPTSTR_chvt	"<1"
#define OPTSTR_cksum	"HIPLN"
#define OPTSTR_cmp	"<2>2ls"
#define OPTSTR_comm	"<2>2321"
#define OPTSTR_compress	"zcd9Lrg[-cd][!zgLr]"
#define OPTSTR_cp	"<2RHLPp"USE_CP_MORE("rdaslvnF")"fi[-HLPd]"USE_CP_MORE("[-ni]")
#define OPTSTR_cpio	"mduH:p:|i|t|F:v(verbose)o|[!pio][!pot][!pF]"
#define OPTSTR_crond	"fbSl#<0=8d#<0L:c:[-bf][-LS][-ld]"
#define OPTSTR_crontab	"c:u:elr[!elr]"
#define OPTSTR_cut	"b:|c:|f:|d:sn[!cbf]"
#define OPTSTR_date	"d:s:r:u[!dr]"
#define OPTSTR_deallocvt	">1"
#define OPTSTR_df	"Pkt*a[-Pk]"
#define OPTSTR_dhcp	"V:H:F:x*r:O*A#<0T#<0t#<0s:p:i:SBRCaovqnbf"
#define OPTSTR_dhcpd	">1P#<0>65535=67fS"
#define OPTSTR_diff	"<2>2B(ignore-blank-lines)d(minimal)b(ignore-space-change)ut(expand-tabs)w(ignore-all-space)i(ignore-case)T(initial-tab)s(report-identical-files)q(brief)a(text)L(label)*S(starting-file):N(new-file)r(recursive)U(unified)#<0=3"
#define OPTSTR_dirname	"<1"
#define OPTSTR_dmesg	"rs#<1n#c"
#define OPTSTR_du	"d#<0hmlcaHkKLsx[-HL][-kKmh]"
#define OPTSTR_dumpleases	">0arf:[!ar]"
#define OPTSTR_echo	"^?en"
#define OPTSTR_eject	">1stT[!tT]"
#define OPTSTR_env	"^i"
#define OPTSTR_expand	"t*"
#define OPTSTR_fallocate	">1l#|"
#define OPTSTR_fdisk	"C#<0H#<0S#<0b#<512ul"
#define OPTSTR_find	"?^HL[-HL]"
#define OPTSTR_fold	"bsuw#"
#define OPTSTR_free	"tgmkb[!tgmkb]"
#define OPTSTR_freeramdisk	"<1>1"
#define OPTSTR_fsck	"?t:ANPRTVsC#"
#define OPTSTR_fsfreeze	"<1>1f|u|[!fu]"
#define OPTSTR_ftpget	"<2cvu:p:P#<0=21>65535"
#define OPTSTR_getty	"<2t#<0H:I:l:f:iwnmLh"
#define OPTSTR_grep	"ZzEFHabhinorsvwclqe*f*m#x[!wx][!EFw]"
#define OPTSTR_groupadd	"<1>2g#<0S"
#define OPTSTR_groupdel	"<1>2"
#define OPTSTR_head	"n#<0=10"
#define OPTSTR_help	""USE_HELP_EXTRAS("ah")
#define OPTSTR_host	"<1>2avt:"
#define OPTSTR_hwclock	">0(fast)f(rtc):u(utc)l(localtime)t(systz)w(systohc)s(hctosys)r(show)[!ul][!rsw]"
#define OPTSTR_iconv	"cst:f:"
#define OPTSTR_id	">1nGgru[!Ggu]"
#define OPTSTR_ifconfig	"^?a"
#define OPTSTR_init	""
#define OPTSTR_inotifyd	"<2"
#define OPTSTR_insmod	"<1"
#define OPTSTR_install	"<1cdDpsvm:o:g:"
#define OPTSTR_ipcrm	"m*M*s*S*q*Q*"
#define OPTSTR_ipcs	"acptulsqmi#"
#define OPTSTR_kill	"?ls: "
#define OPTSTR_killall	"?s:lqvi"
#define OPTSTR_killall5	"?o*ls: [!lo][!ls]"
#define OPTSTR_klogd	"c#<1>8n"
#define OPTSTR_last	"f:W"
#define OPTSTR_link	"<2>2"
#define OPTSTR_ln	"<1vnfs"
#define OPTSTR_logger	"st:p:"
#define OPTSTR_login	">1fph:"
#define OPTSTR_losetup	">2S(sizelimit)#s(show)ro#j:fdca[!afj]"
#define OPTSTR_lsattr	"vldaR"
#define OPTSTR_lspci	"emkn"USE_LSPCI_TEXT("@i:")
#define OPTSTR_makedevs	"<1>1d:"
#define OPTSTR_md5sum	"b"
#define OPTSTR_mdev	"s"
#define OPTSTR_mix	"m:d:l#r#"
#define OPTSTR_mkdir	"<1vpm:"
#define OPTSTR_mke2fs	"<1>2g:Fnqm#N#i#b#"
#define OPTSTR_mkfifo	"<1m:"
#define OPTSTR_mknod	"<2>4"
#define OPTSTR_mkpasswd	">2S:m:P#=0<0"
#define OPTSTR_mkswap	"<1>1"
#define OPTSTR_mktemp	">1q(directory)d(tmpdir)p:"
#define OPTSTR_modinfo	"<1b:k:F:0"
#define OPTSTR_modprobe	"alrqvsDb"
#define OPTSTR_mount	"?O:afnrvwt:o*[-rw]"
#define OPTSTR_mountpoint	"<1qdx"
#define OPTSTR_nbd_client	"<3>3ns"
#define OPTSTR_netstat	"pWrxwutneal"
#define OPTSTR_nfsmount	"?<2>2"
#define OPTSTR_nice	"^<1n#"
#define OPTSTR_nl	"v#<1=1l#b:n:s:w#<0=6E"
#define OPTSTR_nohup	"<1^"
#define OPTSTR_nsenter	"<1F(no-fork)t#(target)i:(ipc);m:(mount);n:(net);p:(pid);u:(uts);U:(user);"
#define OPTSTR_od	"j#vN#xsodcbA:t*"
#define OPTSTR_oneit	"^<1c:p"
#define OPTSTR_openvt	"c#<1>63sw"
#define OPTSTR_partprobe	"<1"
#define OPTSTR_passwd	">1a:dlu"
#define OPTSTR_paste	"d:s"
#define OPTSTR_pgrep	"?P# s# xvonlf[!sP]"
#define OPTSTR_pidof	"<1so:"
#define OPTSTR_ping	"<1>1t#<0>255c#<0s#<0>65535I:W#<0w#<0q46[-46]"
#define OPTSTR_pivot_root	"<2>2"
#define OPTSTR_pmap	"<1xq"
#define OPTSTR_printenv	"0(null)"
#define OPTSTR_printf	"<1"
#define OPTSTR_ps	">0o*T"
#define OPTSTR_pwd	">0LP[-LP]"
#define OPTSTR_pwdx	"<1a"
#define OPTSTR_readlink	"<1>1fenq[-fe]"
#define OPTSTR_realpath	"<1"
#define OPTSTR_reboot	"n"
#define OPTSTR_renice	"<1gpun#|"
#define OPTSTR_rfkill	"<1>2"
#define OPTSTR_rm	"fiRr[-fi]"
#define OPTSTR_rmdir	"<1p"
#define OPTSTR_rmmod	"<1wf"
#define OPTSTR_route	"?neA:"
#define OPTSTR_sed	"(version)e*f*inr"
#define OPTSTR_seq	"<1>3?f:s:"
#define OPTSTR_setsid	"^<1t"
#define OPTSTR_sh	"c:"USE_SH_INTERACTIVE("i")
#define OPTSTR_sha1sum	"b"
#define OPTSTR_skeleton	"(walrus)(blubber):;(also):e@d*c#b:a"
#define OPTSTR_skeleton_alias	"b#dq"
#define OPTSTR_sleep	"<1"
#define OPTSTR_split	">2a#<1=2>9b#<1l#<1"
#define OPTSTR_stat	"c:f"
#define OPTSTR_strings	"an#=4<1fo"
#define OPTSTR_su	"lmpc:s:"
#define OPTSTR_sulogin	"t#<0=0"
#define OPTSTR_swapoff	"<1>1"
#define OPTSTR_swapon	"<1>1p#<0>32767"
#define OPTSTR_switch_root	"<2c:h"
#define OPTSTR_sysctl	"^neNqwpaA[!ap][!aq][!aw][+aA]"
#define OPTSTR_syslogd	">0l#<1>8=8R:b#<0>99=1s#<0=200m#<0>71582787=20O:p:f:a:nSKLD"
#define OPTSTR_tail	"fc-n-[-cn]"
#define OPTSTR_tar	"&(no-recursion)(numeric-owner)(no-same-permissions)(overwrite)(exclude)*(to-command):o(no-same-owner)p(same-permissions)k(keep-old)c(create)|h(dereference)x(extract)|t(list)|v(verbose)z(gzip)O(to-stdout)m(touch)X(exclude-from)*T(files-from)*C(directory):f(file):[!txc]"
#define OPTSTR_taskset	"<1^pa"
#define OPTSTR_tcpsvd	"^<3c#=30<1C:b#=20<0u:l:hEv"
#define OPTSTR_tee	"ia"
#define OPTSTR_telnet	"<1>2"
#define OPTSTR_telnetd	"w#<0b:p#<0>65535=23f:l:FSKi[!wi]"
#define OPTSTR_tftpd	"rcu:l"
#define OPTSTR_time	"<1^p"
#define OPTSTR_timeout	"<2^k:s: "
#define OPTSTR_top	">0d#=3n#<1mb"
#define OPTSTR_touch	"acd:mr:t:[!dtr]"
#define OPTSTR_tr	"^>2<1Ccsd[+cC]"
#define OPTSTR_traceroute	"<1>2i:f#<1>255=1z#<0>86400=0g*w#<0>86400=5t#<0>255=0s:q#<1>255=3p#<1>65535=33434m#<1>255=30rvndlIUF64"
#define OPTSTR_truncate	"<1s#|c"
#define OPTSTR_tty	"s"
#define OPTSTR_umount	"ndDflrat*v[!na]"
#define OPTSTR_uname	"oamvrns[+os]"
#define OPTSTR_uniq	"f#s#w#zicdu"
#define OPTSTR_unlink	"<1>1"
#define OPTSTR_unshare	"<1^imnpuU"
#define OPTSTR_useradd	"<1>2u#<0G:s:g:h:SDH"
#define OPTSTR_userdel	"<1>1r"
#define OPTSTR_usleep	"<1"
#define OPTSTR_uudecode	">1o:"
#define OPTSTR_uuencode	"<1>2m"
#define OPTSTR_vconfig	"<2>4"
#define OPTSTR_vmstat	">2n"
#define OPTSTR_watch	"^<1n#<0=2te"
#define OPTSTR_which	"<1a"
#define OPTSTR_who	"a"
#define OPTSTR_xargs	"^I:E:L#ptxrn#<1s#0"
#define OPTSTR_zcat	"aLrg[!aLrg]"
