#pragma once
namespace GameCall
{
	void Bulletin(std::wstring text); //���ȹ���
	DWORD GetGameState(); //��ȡ��Ϸ״̬

	DWORD GetPlayerLevel();

	void SendPacket(); //����
	void AllocatePacket(DWORD len); //����CALL
	void EncryptPacket(DWORD arg, DWORD len); //����CALL
	//void PasKeyCall(DWORD arg, DWORD len); //��ԿCALL
	void ReturnToSelectRole();
	void EnterRoleByIndex(DWORD Index); //�����ɫ
	void EreaCall(DWORD TaskId); //����CALL
	void MovToPos(DWORD Area, DWORD Pos, DWORD x, DWORD y); //����ƶ�
	void SelectMap(); //���ѡͼ
	void EnterMap(DWORD MapId , DWORD easy); //�����ͼ
	void EnterMapForTask(DWORD MapId, DWORD easy, DWORD Taskid); //���������ͼ
	void PickUpItem(DWORD ItemId , DWORD xPos, DWORD yPos); //���ʰȡ
	int  Dectypt(int _address); //����
	void Encrypt(int _address, int value, int type = 0); //����
	void TaskFinish(DWORD TaskiId, DWORD times = 1);  //�������
	void TaskCommit(DWORD TaskId);   //�����ύ
	void TaskAccept(DWORD TaskId); //��������
	void ObjectSkillCall(DWORD pointer , DWORD x, DWORD  y, DWORD z,DWORD skId, DWORD hurt); //OBJ����CALL
	void SkillCall(DWORD pointer, DWORD x, DWORD  y, DWORD z, DWORD skId, DWORD hurt , DWORD size = 3); //����CALL
	void BreakDownEquipment(DWORD equPos); //����ֽ�
	void BreakDownCall(DWORD equPos); //�ֽ�CALL
	void SellEquipment(DWORD equPos); //�������
	void AntiFlop(DWORD x, DWORD y);//�������
	void ClearUpPacket(); //������
	void LeaveMap(); //�����ͼ
	void MemKeyBorad(DWORD vkCode,bool BKeyDown); //�ڴ水��
	void MemAttack(); //��ͨ����
	void MonsDecHealthCall(DWORD player ,DWORD object, DWORD health); //��ѪCALL
	void SetScore(DWORD score); //����CALL
	void ReplaceEquipment(DWORD Id, DWORD clss); //��װCALL
	bool BOpenDoor(); //�Ƿ���
	void MoveToNextMap(int direct); //��ͼCALL
	void OnceAgainToMap(); //�ٴν�ͼ
	int  GetPos(int obejct, int arg); //��ȡ����
	void SetPos(int object, int x, int y, int z); //��������
	bool IsPlayerAlive(); //����Ƿ����
	bool IsTask();
	DWORD GetCurrentRoleIndex(); //��ȡ��ǰ��ɫ����
	DWORD GetAllRoleCount(); //��ȡ��ɫ����
	DWORD GetUpLevelMapId();  //��ȡ�ʺϵȼ��ĵ�ͼ
	void  RandomSleep(DWORD times = 500); //�����ʱ
	DWORD GetCurrentPL(); //��ȡ��ǰƣ��
	DWORD GetMaxPL(); //��ȡ���ƣ��
	DWORD GetTextPath(DWORD Id); //��ȡ�ı�·��
	DWORD GetSkAtkPath(DWORD Obj); //��ȡ����AtkĿ¼
	void  SetSkillHurt(DWORD skId, DWORD skHurt); //���ü����˺�

	VOID __stdcall SwitchEPCaller(__in PVOID Address,
		__in PVOID Callsite,
		__in PVOID * OldCallsite);

	VOID __stdcall SwitchEP(__in PVOID Address,
		__in PVOID Callsite,
		__in PVOID * OldCallsite);

	VOID __stdcall SwitchEPCallerNew(__in PVOID Address,
		__in PVOID Callsite,
		__in PVOID * OldCallsite);
};


//DWORD ȡ��ɫλ������()
//{
//	return READOFFSET(��ɫ��ַ, ƫ��_��ɫ��Ϣ, 0x108);
//}
//DWORD ȡ��ɫ������()
//{
//	return (READOFFSET(��ɫ��ַ, ƫ��_��ɫ��Ϣ, 0xA8) -
//		READOFFSET(��ɫ��ַ, ƫ��_��ɫ��Ϣ, 0xA4)) / 4;
//}

