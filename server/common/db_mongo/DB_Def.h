/*
 * server_define.h
 *
 *  Created on: Nov 25, 2013
 *      Author: ti
 */

#ifndef DB_DEF_H_
#define DB_DEF_H_

// main message
enum DB_OPERATOR {
	MONGO_LOAD_PLAYER_ALL_DATA		= 30000000,				//  请求加载玩家数据
	MONGO_OPERATING_OFFLINE_DATA	= 30000010,				//  请求操作离线数据
	MONGO_SAVE_CHAT_RECORD			= 30000011,				//  请求保存聊天记录
	MONGO_READ_CHAT_RECORD			= 30000013,				//  请求读取私聊记录
	MONGO_LOAD_ARENA_FIGHT_DATA   = 30000014,
	MONGO_REFRESH_RANKING_RECORD	= 30000015,				//  请求排行榜
	MONGO_SAVE_RANKING_RECORD		= 30000016,				//	SAVE 排行榜
	MANGO_SAVE_ARENA_SEASON_DATA  = 30000017,				// 竞技场赛季数据保存
	MANGO_CLAER_ARENA_PLAYER_DATA = 30000018,				// 竞技场玩家数据清空
	MANGO_SAVE_ARENA_KING_TIME    = 30000019,				// 竞技场王者组名次保存
	MANGO_SAVE_ARENA_BE_WORSHIP    = 30000020,				// 竞技场被膜拜次数保存
	MONGO_SAVE_GANG					= 30000050,				//	请求保存公会信息
	MONGO_SAVE_TITLE_INFO			= 30000051,				//  请求保存排行榜
	MONGO_SAVE_TEAM_INFO			= 30000052,				//  请求保存组队竞技排行数据
	MONGO_LOAD_DRAGON_VALE_ROB_MATCH = 30000053,
	MONGO_LOAD_DRAGON_VALE_ROB_FIGHT = 30000054,
	MONGO_ACTIVATION_CODE_OP		= 30000055,				//领取激活码操作
	MONGO_SAVE_DRAGON_VALE_DETAIL = 30000056,
	MONGO_SAVE_GANG_WAR_INFO		= 30000057,				// 保存公会战信息
	MONGO_SAVE_CAMPFIRE_DETAIL    = 30000058,          // 保存篝火信息
	MONGO_SACE_ACCESS_DATA_COUNT    = 30000059,				//保存访问数据统计
	MONGO_SAVE_DRAGON_VALE_IS_SPECIAL = 30000060,
	MONGO_DATA_ACTIVE_CONTENT 		= 30000061,				//保存活动数据
	MONGO_DATA_SAVE_PROPOSAL 		= 30000062,				//保存你提我改数据
    MONGO_SAVE_DRAGON_VALE_RESET = 30000063,
    MONGO_SAVE_MALL_BUY_NUM = 30000064,
    MONGO_DATA_AUCTION_GOODS = 30000065,
    MONGO_KNIGHT_TRIALS_MATCH_PLAYER = 30000066,		//骑士试炼数据库读取玩家信息
    MONGO_SAVE_INVEST_PLAN_HISTORY_RECORD = 30000067,
    MONGO_LOAD_INVEST_PLAN_HISTORY_RECORD = 30000068,
    MONGO_SAVE_THORLOTTERY_RECORD = 30000069,
    MONGO_SAVE_INNER_CHECK_INFO = 30000070,
    MONGO_SAVE_FB_INFO = 30000071,
    MONGO_SAVE_ANSWER_INFO = 30000072,
    MONGO_SAVE_QUESTIONNAIRE_INFO = 30000073,
	 MONGO_KNIGHT_TRIALS_LOAD_FIGHTER_PLAYER = 30000074,//骑士试练加载战斗玩家通过数据库
	 MONGO_KNIGHT_TRIALS_RESERT_PLAYER = 30000075,//骑士试练重置列表
	 MONGO_SAVE_WORLD_BOSS_INFO = 30000076, 				// world boss
	 MONGO_SAVE_TWO_RECHARGE_INFO = 30000077, 				// 全民充值
	 MONGO_SAVE_EXPEDITION_MANAGER		= 30000078, // 远征存各公会数据
	 MONGO_SAVE_EXPEDITION_MANAGER_DATA	= 30000079, // 远征：地图保存数据
	 MONGO_SAVE_ACTIVE_DATA = 30000080, //活动控制存库
};

enum DB_OPERATOR_COMMON_TYPE {
	DB_COMMON_TYPE_ACTIVE_CONTENT = 1, //活动
	DB_COMMON_TYPE_MALL = 2, //商城
	DB_THORLOTTERY		= 3, //雷神之锤
	DB_COMMON_TYPE_ACTIVE_CONTENT_TIME = 4, //活动
	DB_COMMON_TYPE_ANSWER = 5, //智慧试练
	DB_COMMON_TYPE_TWO_RECHARGE = 6, //全名充值
	DB_COMMON_TYPE_ACTIVE = 7, //活动控制
};

#endif /* DB_DEF_H_ */