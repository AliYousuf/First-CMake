#include "MyInfo.h"
#include "FriendInfo.h"
int main()
{
    am::Iam();

	Friend *start;

	start = get_frind();
	print_frind( start );
	freeList(start);
}
