//********************************************************************
//app_cfg.h是用来配置应用软件的，主要是任务的优先级和堆栈
//大小，中断优先级等信息。目前还没有基于ucosii开发应用软件，
//所以只需在include文件夹中创建一个空的app_cfg.h文件即可.
//**********************************************************************
#ifndef _APP_CFG_H
#define	_APP_CFG_H

/* task priority */
#define STARTUP_TASK_PRIO		4
#define TASK1_PRIO				5
#define TASK2_PRIO				6

/* task stack size */
#define STARTUP_TASK_STK_SIZE	80
#define TASK1_STK_SIZE			128
#define TASK2_STK_SIZE			128

/* interrupt priority */

#endif

